// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockComponents {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKCOMPONENTS
public:
    class ScriptBlockComponents& operator=(class ScriptBlockComponents const&) = delete;
    ScriptBlockComponents(class ScriptBlockComponents const&) = delete;
    ScriptBlockComponents() = delete;
#endif

public:
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&, struct Scripting::Version);
    MCAPI static class Scripting::Result<class Scripting::StrongObjectHandle> create(std::string const&, class BlockSource&, class BlockPos, class Scripting::WeakLifetimeScope const&);

protected:

private:

};