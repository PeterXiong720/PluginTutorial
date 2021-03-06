// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SkeletonHorseTrapGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETONHORSETRAPGOAL
public:
    class SkeletonHorseTrapGoal& operator=(class SkeletonHorseTrapGoal const&) = delete;
    SkeletonHorseTrapGoal(class SkeletonHorseTrapGoal const&) = delete;
    SkeletonHorseTrapGoal() = delete;
#endif

public:
    /*0*/ virtual ~SkeletonHorseTrapGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*
    inline void start(){
        void (SkeletonHorseTrapGoal::*rv)();
        *((void**)&rv) = dlsym("?start@SkeletonHorseTrapGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI SkeletonHorseTrapGoal(class Horse&, int, float);

protected:

private:
    MCAPI class Skeleton* _createSkeleton(enum Difficulty const&, class Horse const&);

};