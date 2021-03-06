// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseScriptGameTestFunction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SyncScriptGameTestFunction : public BaseScriptGameTestFunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCSCRIPTGAMETESTFUNCTION
public:
    class SyncScriptGameTestFunction& operator=(class SyncScriptGameTestFunction const&) = delete;
    SyncScriptGameTestFunction(class SyncScriptGameTestFunction const&) = delete;
    SyncScriptGameTestFunction() = delete;
#endif

public:
    /*0*/ virtual ~SyncScriptGameTestFunction();
    /*2*/ virtual std::unique_ptr<class gametest::IGameTestFunctionRunResult> run(class gametest::BaseGameTestHelper&, class gametest::IGameTestFunctionContext&) const;
    MCAPI SyncScriptGameTestFunction(class Scripting::WeakLifetimeScope, class Scripting::Closure<void (struct Scripting::TypedObjectHandle<class ScriptGameTestHelper>)>, std::string const&);

protected:

private:

};