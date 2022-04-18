// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptEcsBinderComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTECSBINDERCOMPONENT
public:
    class ScriptEcsBinderComponent& operator=(class ScriptEcsBinderComponent const&) = delete;
    ScriptEcsBinderComponent(class ScriptEcsBinderComponent const&) = delete;
#endif

public:
    /*0*/ virtual ~ScriptEcsBinderComponent();
    /*1*/ virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&) const;
    /*2*/ virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);
    /*
    inline  ~ScriptEcsBinderComponent(){
         (ScriptEcsBinderComponent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptEcsBinderComponent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptEcsBinderComponent(class entt::basic_registry<enum entt::entity>&, class ItemActor const&);
    MCAPI ScriptEcsBinderComponent(enum entt::entity);
    MCAPI ScriptEcsBinderComponent();
    MCAPI enum entt::entity getIdentifier() const;
    MCAPI static std::string const TAG;

protected:

private:

};