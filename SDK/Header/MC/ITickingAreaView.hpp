// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ITickingAreaView {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITICKINGAREAVIEW
public:
    class ITickingAreaView& operator=(class ITickingAreaView const&) = delete;
    ITickingAreaView(class ITickingAreaView const&) = delete;
    ITickingAreaView() = delete;
#endif

public:
    /*0*/ virtual ~ITickingAreaView();
    /*
    inline  ~ITickingAreaView(){
         (ITickingAreaView::*rv)();
        *((void**)&rv) = dlsym("??1ITickingAreaView@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};