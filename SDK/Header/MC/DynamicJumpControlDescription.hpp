// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DynamicJumpControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYNAMICJUMPCONTROLDESCRIPTION
public:
    class DynamicJumpControlDescription& operator=(class DynamicJumpControlDescription const&) = delete;
    DynamicJumpControlDescription(class DynamicJumpControlDescription const&) = delete;
    DynamicJumpControlDescription() = delete;
#endif

public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~DynamicJumpControlDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*
    inline void serializeData(class Json::Value& a0) const{
        void (DynamicJumpControlDescription::*rv)(class Json::Value&) const;
        *((void**)&rv) = dlsym("?serializeData@DynamicJumpControlDescription@@UEBAXAEAVValue@Json@@@Z");
        return (this->*rv)(std::forward<class Json::Value&>(a0));
    }
    inline  ~DynamicJumpControlDescription(){
         (DynamicJumpControlDescription::*rv)();
        *((void**)&rv) = dlsym("??1DynamicJumpControlDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};