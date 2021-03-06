// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERINSTANCE
public:
    class ServerInstance& operator=(class ServerInstance const&) = delete;
    ServerInstance(class ServerInstance const&) = delete;
    ServerInstance() = delete;
#endif

public:
    /*
    inline void onLevelExit(){
        void (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("?onLevelExit@ServerInstance@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onGameSessionReset(){
        void (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("?onGameSessionReset@ServerInstance@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onTick(int a0, int a1){
        void (ServerInstance::*rv)(int, int);
        *((void**)&rv) = dlsym("?onTick@ServerInstance@@UEAAXHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline void onInternetUpdate(){
        void (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("?onInternetUpdate@ServerInstance@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onGameModeChanged(){
        void (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("?onGameModeChanged@ServerInstance@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void updateScreens(){
        void (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("?updateScreens@ServerInstance@@UEAAXXZ");
        return (this->*rv)();
    }
    inline  ~ServerInstance(){
         (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("??1ServerInstance@@UEAA@XZ");
        return (this->*rv)();
    }
    inline void onAppResumed(){
        void (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("?onAppResumed@ServerInstance@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onAppSuspended(){
        void (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("?onAppSuspended@ServerInstance@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onCriticalDiskError(bool a0, enum Core::LevelStorageState const& a1){
        void (ServerInstance::*rv)(bool, enum Core::LevelStorageState const&);
        *((void**)&rv) = dlsym("?onCriticalDiskError@ServerInstance@@UEAAX_NAEBW4LevelStorageState@Core@@@Z");
        return (this->*rv)(std::forward<bool>(a0), std::forward<enum Core::LevelStorageState const&>(a1));
    }
    inline void onLevelCorrupt(){
        void (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("?onLevelCorrupt@ServerInstance@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onLowDiskSpace(bool a0){
        void (ServerInstance::*rv)(bool);
        *((void**)&rv) = dlsym("?onLowDiskSpace@ServerInstance@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void onLowMemory(){
        void (ServerInstance::*rv)();
        *((void**)&rv) = dlsym("?onLowMemory@ServerInstance@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onOutOfDiskSpace(bool a0){
        void (ServerInstance::*rv)(bool);
        *((void**)&rv) = dlsym("?onOutOfDiskSpace@ServerInstance@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    */
    MCAPI ServerInstance(class IMinecraftApp&, class gsl::not_null<class Bedrock::NonOwnerPointer<class ServerInstanceEventCoordinator> > const&);
    MCAPI void disconnectAllClientsWithMessage(std::string);
    MCAPI bool enableItemStackNetManager() const;
    MCAPI bool initializeServer(class IMinecraftApp&, class AllowList&, class PermissionsFile*, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager> > const&, class std::chrono::duration<__int64, struct std::ratio<1, 1> >, std::string, std::string, std::string, class LevelSettings, int, bool, struct ConnectionDefinition, bool, std::vector<std::string> const&, std::string, class mce::UUID const&, class IMinecraftEventing&, class IResourcePackRepository&, class IContentTierManager const&, class ResourcePackManager&, class std::function<std::unique_ptr<class LevelStorage> (class Scheduler& )>, std::unique_ptr<class LevelLooseFileStorage>, std::string const&, class LevelData*, std::string, std::string, std::unique_ptr<class EducationOptions>, class ResourcePackManager*, class std::function<void (void)>, class std::function<void (void)>, class ServerMetrics*, class DebugEndPoint*, bool, class std::shared_ptr<class Core::FileStorageArea>, unsigned short, bool, bool, class std::optional<struct PlayerMovementSettings>, class std::optional<struct ScriptSettings>, class Experiments const&, enum TransportLayer, float);
    MCAPI void leaveGameSync();
    MCAPI void queueForServerThread(class std::function<void (void)>);
    MCAPI void setWakeupFrequency(int);
    MCAPI void startServerThread();
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1000000000> > const SERVER_MAX_DELAY_BEFORE_SLOWDOWN;

protected:

private:
    MCAPI void _threadSafeExecute(class std::function<void (void)>);
    MCAPI void _update();

};