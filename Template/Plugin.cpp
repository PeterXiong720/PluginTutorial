#include "pch.h"
#include "Plugin.h"

#include <EventAPI.h>
#include <LoggerAPI.h>
#include <MC/Level.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/Block.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Actor.hpp>
#include <MC/Player.hpp>
#include <MC/ItemStack.hpp>
#include <LLAPI.h>


Logger logger("tutorial-plugin");

void PluginInit()
{
    LL::registerPlugin("tutorial-plugin", "tutorial plugin", LL::Version(1, 14, 514));
    logger.info("插件tutorial-plugin已加载.");

    RegisterCommands();
    SetListeners();
}

void SetListeners()
{
    //假装这是一个黑名单拦截
    Event::PlayerJoinEvent::subscribe([](Event::PlayerJoinEvent ev)
        {
            //象征性的黑名单
            std::list<std::string> banList = { "MiniWorld", "Netease"};
            Player* player = ev.mPlayer;
            for (auto name : banList)
            {
                if (player->getRealName() == name) 
                {
                    logger.info(u8"发现黑名单人员 {} 心存侥幸，试图加入服务器，已被踢出!", player->getRealName());
                    player->kick(u8"§c您已被列入黑名单，禁止加入本服务器！！！\n§b如有异议请管理员联系，如有任何不满请憋回去。");
                    return true;
                }
            }
            logger.info(u8"玩家: {} 黑名单检查通过，已允许加入游戏", player->getRealName());
            return true;
        });

    //监听玩家攻击事件
    Event::PlayerAttackEvent::subscribe([](const Event::PlayerAttackEvent& ev)
        {
            Player* player = ev.mPlayer;
            Actor* actor = ev.mTarget;
            if (!player->isOperator()) {
                logger.info(u8"玩家:{} 攻击了 {} | 坐标 {} 维度 {}",
                    player->getRealName(), actor->getTypeName(), actor->getPos().toString(),
                    std::to_string(actor->getDimensionId()));
                return true;
            }
        });
}