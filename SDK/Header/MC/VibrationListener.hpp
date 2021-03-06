// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VibrationListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENER
public:
    class VibrationListener& operator=(class VibrationListener const&) = delete;
    VibrationListener(class VibrationListener const&) = delete;
    VibrationListener() = delete;
#endif

public:
    /*0*/ virtual ~VibrationListener();
    /*1*/ virtual void handleGameEvent(class GameEvent const&, class BlockPos const&, class Actor const*, class BlockSource&);
    /*2*/ virtual class BlockPos getOwnerPos() const;
    /*3*/ virtual bool isEventInRange(class GameEvent const&, class BlockPos const&) const;
    MCAPI VibrationListener(class std::function<void (struct Tick, class BlockPos)>, class std::function<class BlockPos (void)>, int, enum VibrationListener::OwnerType);
    MCAPI class GameEvent const& getGameEvent() const;
    MCAPI unsigned __int64 getRange() const;
    MCAPI bool isWaiting() const;
    MCAPI void stopWaiting();
    MCAPI static int getGameEventFrequency(class GameEvent const&);

protected:

private:

};