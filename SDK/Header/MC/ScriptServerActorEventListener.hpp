// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptServerActorEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTOREVENTLISTENER
public:
    class ScriptServerActorEventListener& operator=(class ScriptServerActorEventListener const&) = delete;
    ScriptServerActorEventListener(class ScriptServerActorEventListener const&) = delete;
    ScriptServerActorEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerActorEventListener();
    /*2*/ virtual enum EventResult onActorAttack(class Actor&, class Actor&, int);
    /*3*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*4*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*5*/ virtual enum EventResult onActorTick(class Actor&);
    /*6*/ virtual enum EventResult onActorSneakChanged(class Actor&, bool);
    /*7*/ virtual enum EventResult onActorStartRiding(class Actor&, class Actor&);
    /*8*/ virtual enum EventResult onActorStopRiding(class Actor&, bool, bool, bool);
    /*9*/ virtual enum EventResult onActorDeath(class Actor&, class ActorDamageSource const&, enum ActorType);
    /*10*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*11*/ virtual enum EventResult onActorCreated(class Actor&);
    /*12*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*13*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*14*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*15*/ virtual enum EventResult onActorDroppedItem(class Actor&, class ItemInstance const&);
    /*16*/ virtual enum EventResult onActorCarriedItemChanged(class Actor&, class ItemInstance const&, class ItemInstance const&, enum HandSlot);
    /*17*/ virtual enum EventResult onActorEquippedArmor(class Actor&, class ItemInstance const&, enum ArmorSlot);
    /*18*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*19*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*20*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*21*/ virtual enum EventResult onEvent(struct ProjectileHitEvent const&);
    /*22*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*23*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*24*/ virtual enum EventResult onEvent(struct ActorUseItemEvent const&);
    /*25*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*26*/ virtual enum EventResult onEvent(struct ActorRemovedEvent const&);
    /*27*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*28*/ virtual enum EventResult onEvent(struct ActorDefinitionEvent const&);
    /*29*/ virtual enum EventResult onEvent(struct ActorHurtEvent const&);
    /*30*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*31*/ virtual enum EventResult onActorMove(class Actor&, class Vec3 const&);
    /*32*/ virtual enum EventResult onEvent(struct ActorAcquiredItemEvent const&);
    MCAPI ScriptServerActorEventListener(class MinecraftServerScriptEngine&);

protected:

private:

};