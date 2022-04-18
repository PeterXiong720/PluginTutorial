#include "pch.h"
#include "Plugin.h"

#include <EventAPI.h>
#include <LoggerAPI.h>
#include <MC/Level.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/Block.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Actor.hpp>
#include <MC/Player.hpp>
#include <MC/ItemStack.hpp>
#include <LLAPI.h>
#include <RegCommandAPI.h>

class HelloCommand : public Command
{
    string out;
    enum class BoolType
    {
        outtrue,
        outfalse,
    } operation;

public:
    void execute(CommandOrigin const& ori, CommandOutput& output) const override
    {
        switch (operation)
        {
        case BoolType::outtrue:
            output.success("Hello World"); // if  output.success commandexecute true
            break;
        case BoolType::outfalse:
            output.error("Hello World"); // if  output.error commandexecute false
            break;
        default:
            break;
        }
    }

    static void setup(CommandRegistry* registry)
    {
        registry->registerCommand(
            "hello",
            "Hello World",
            CommandPermissionLevel::Any,
            { (CommandFlagValue)0 },
            { (CommandFlagValue)0x80 }); // register command

        registry->addEnum<BoolType>(
            "true&false",
            { {"false", BoolType::outfalse}, {"true", BoolType::outtrue} });

        registry->registerOverload<HelloCommand>(
            "hello",
            RegisterCommandHelper::makeMandatory<CommandParameterDataType::ENUM>(&HelloCommand::out, "BoolType", "true&false"));
    }
};

void RegisterCommands()
{
    Event::RegCmdEvent::subscribe([](Event::RegCmdEvent ev) { // Register commands Event
        HelloCommand::setup(ev.mCommandRegistry);
        return true;
        });
}