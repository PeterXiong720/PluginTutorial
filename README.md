> 本系列教程默认您已经掌握C++或JavaScript、Lua的基本语法和使用，如果您对C++、Js或者Lua还不太了解的话，可以到https://[www.runoob.com/cplusplus/cpp-tutorial.html和https://www.runoob.com/js/js-tutorial.html了解和学习。](http://www.runoob.com/cplusplus/cpp-tutorial.html%E5%92%8Chttps://www.runoob.com/js/js-tutorial.html%E4%BA%86%E8%A7%A3%E5%92%8C%E5%AD%A6%E4%B9%A0%E3%80%82)

![](https://i0.hdslb.com/bfs/article/02db465212d3c374a43c60fa2625cc1caeaab796.png@progressive.webp)

### 1. 安装Visual Studio 2022

前往https://[visualstudio.microsoft.com/zh-hans/vs/，下载最新的Visual](http://visualstudio.microsoft.com/zh-hans/vs/%EF%BC%8C%E4%B8%8B%E8%BD%BD%E6%9C%80%E6%96%B0%E7%9A%84Visual) Studio，Community版是面向个人和学生的免费版本。

![下载](https://i0.hdslb.com/bfs/article/watermark/4a136801fb9cc75e92d41becc00633c98a4785a9.png@942w_602h_progressive.webp)

如果只是想开发插件的话，可以指选勾选“使用C++的桌面开发”工作负载，其余的不用管，点击安装后耐心等待即可。如果家里网速慢的话可能会需要20分钟甚至更长时间，最好找个有空闲的时间安装。微软特有的历史包袱（bushi）

![](https://i0.hdslb.com/bfs/article/watermark/d82bdcb6578c777699423b8ea216b224651350fd.png@942w_531h_progressive.webp)

### 2.创建工程

我们前往https://[github.com/LiteLDev/PluginTemplate，点击“Use](http://github.com/LiteLDev/PluginTemplate%EF%BC%8C%E7%82%B9%E5%87%BB%E2%80%9CUse) this templete”，填写插件名称等信息后点击创建，等待一会就可以看到在https://[github.com/your_name/plugin_name下我们的工程就已经创建好了。](http://github.com/your_name/plugin_name%E4%B8%8B%E6%88%91%E4%BB%AC%E7%9A%84%E5%B7%A5%E7%A8%8B%E5%B0%B1%E5%B7%B2%E7%BB%8F%E5%88%9B%E5%BB%BA%E5%A5%BD%E4%BA%86%E3%80%82)

![](https://i0.hdslb.com/bfs/article/watermark/83f22d93e4bf1c3797fda29309dd644dea5a0c2c.png@942w_560h_progressive.webp)

![](https://i0.hdslb.com/bfs/article/watermark/0400bdc17a32af19a60c45a90b7ac5980db3122a.png@942w_558h_progressive.webp)

![](https://i0.hdslb.com/bfs/article/watermark/2616e90831b3d7b71fe398bc635c8e72ca05a82a.png@942w_558h_progressive.webp)

### .克隆仓库

工程创建好后，我们需要先把她克隆到本地。如果前面的Visual Studio安装正确并重启后，应该可以看到“Open with Visual Studio”，点击后会帮我们自动启动Visual Studio，我们只需要点击克隆，让后耐心等待即可。

![](https://i0.hdslb.com/bfs/article/watermark/d1b9d42b4437f3d18a90ceb1365541f3a551e640.png@942w_555h_progressive.webp)

![](https://i0.hdslb.com/bfs/article/watermark/ed39952750890d2b56cb7d76ac4de2a837858854.png@942w_557h_progressive.webp)

![](https://i0.hdslb.com/bfs/article/watermark/9aa83af892189989819d11ebc323584338d2dabf.png@942w_552h_progressive.webp)

![](https://i0.hdslb.com/bfs/article/watermark/26eebf7981898014f10e3b3fe3b31df071fc942b.png@942w_555h_progressive.webp)

克隆完成后，我们打开dllmain.cpp和Plugin.cpp，删除以下内容：

```cpp
//dllmain.cpp

static_assert(false, "Please modify your plugin registration details and delete this line");

//Plugin.cpp

static_assert(false, "Please set your plugin's name below and delete this line");
```

![](https://i0.hdslb.com/bfs/article/watermark/80822f89995d16f457544610211cfe05575476e8.png@942w_554h_progressive.webp)

（图中第17行）

![](https://i0.hdslb.com/bfs/article/watermark/a607f999c5026f00fc83642e3d69f08bca4b6b99.png@942w_554h_progressive.webp)

（图中第13行）

### 4.开始脱发（不是）

接下来就是正式开始写代码啦。将Plugin.cpp中的内容替换成以下内容：

```cpp
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
```

![](https://i0.hdslb.com/bfs/article/watermark/baad9abb4cb31922feb6e1e54906c48647932c8d.png@942w_507h_progressive.webp)

### 5.配置调式

写完Bug（不是），自然是进行传说中的Debug啦。

右键我们的项目，点击属性->调试，

![](https://i0.hdslb.com/bfs/article/watermark/f8f99042a98fb7d1e392df5d62befd011e695835.png@942w_507h_progressive.webp)

更改设置为以下值：

> 命令：bedrock_server_mod.exe
>
> 工作目录：<path to your server>

其中，工作目录填你搭建好的插件服务器的路径，可以填相对路径或者用Visual Studio提供的宏。

注意：在搭建插件服的时候记得一定要备份好bedrock_server.exe和bedrock_server.pdb文件，等下会用到。

![](https://i0.hdslb.com/bfs/article/watermark/6f84f3fb3c7493a2a525ff71f9648ccb0573ff99.png@942w_657h_progressive.webp)

配置完就可以按F5开始调试了。

首次调试，或者更新了MC版本的话，如果你设置的工作目录里能够找到bedrock_server.exe和bedrock_server.pdb，则会看到SDK/Lib目录下已经自动生成好了以下文件：

![](https://i0.hdslb.com/bfs/article/watermark/3171d5cbfdaab482654c23a270d9b342d1cdaa90.png@942w_540h_progressive.webp)

看到以下输出，就代表我们的插件已经成功安装了：

![](https://i0.hdslb.com/bfs/article/watermark/f3a397bbc425b0726bc257c08baa24f31d1222bb.png@942w_507h_progressive.webp)

效果展示：

![]()

### 6.注册指令

TODO

### 7.尾巴

这一期C++插件教程就结束了，如果你听的有点懵，也没关系，因为C++的学习曲线本来就比较陡峭，C++插件本身也比较复杂。后面我们会讲一讲如何用JavaScript和Lua来开发插件，也就是传说中的LLSE（LiteLoaderBDS脚本引擎），相比C++插件而言，脚本插件的学习难度会低很多，没听懂的小伙伴可以点个关注，我会继续更新BDS插件开发方面的教程。

最后，非常感谢LiteLDev团队，以及所有社区贡献者，正是你们的付出，才让基岩版官方服务器支持插件成为可能，才让BDS社区变得越来越好！（记得一定要去LL的开源项目点一个Star哦）

LiteloaderBDS开源项目：<https://github.com/LiteLDev/LiteLoaderBDS>

LiteLoaderBDS项目模板：<https://github.com/LiteLDev/PluginTemplate>

LiteLoader SDK：<https://github.com/LiteLDev/LiteLoaderSDK>

参考文献或资料：

<https://github.com/LiteLDev/LiteLoaderBDS/blob/main/README_zh-cn.md>

<https://github.com/LiteLDev/LiteLoaderBDS/discussions/115>
