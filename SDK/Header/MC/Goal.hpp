// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOAL
public:
    class Goal& operator=(class Goal const&) = delete;
    Goal(class Goal const&) = delete;
#endif

public:
    /*0*/ virtual ~Goal();
    /*
    inline bool isTargetGoal() const{
        bool (Goal::*rv)() const;
        *((void**)&rv) = dlsym("?isTargetGoal@Goal@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (Goal::*rv)();
        *((void**)&rv) = dlsym("?tick@Goal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stop(){
        void (Goal::*rv)();
        *((void**)&rv) = dlsym("?stop@Goal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void start(){
        void (Goal::*rv)();
        *((void**)&rv) = dlsym("?start@Goal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onPlayerDimensionChanged(class Player* a0, class AutomaticID<class Dimension, int> a1){
        void (Goal::*rv)(class Player*, class AutomaticID<class Dimension, int>);
        *((void**)&rv) = dlsym("?onPlayerDimensionChanged@Goal@@UEAAXPEAVPlayer@@V?$AutomaticID@VDimension@@H@@@Z");
        return (this->*rv)(std::forward<class Player*>(a0), std::forward<class AutomaticID<class Dimension, int>>(a1));
    }
    inline bool canBeInterrupted(){
        bool (Goal::*rv)();
        *((void**)&rv) = dlsym("?canBeInterrupted@Goal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canContinueToUse(){
        bool (Goal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@Goal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline  ~Goal(){
         (Goal::*rv)();
        *((void**)&rv) = dlsym("??1Goal@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI Goal();
    MCAPI int getRequiredControlFlags() const;
    MCAPI unsigned short getTypeId() const;
    MCAPI void setRequiredControlFlags(int);
    MCAPI void setTypeId(unsigned short);

protected:

private:

};