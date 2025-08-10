#include <Geode/Geode.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

using namespace geode::prelude;

class $modify(GBGLHook, GJBaseGameLayer) {
    void handleButton(bool down, int button, bool player1) {
        auto enable = Mod::get()->getSettingValue<bool>("enable");
        
        if (!enable)
            return GJBaseGameLayer::handleButton(down, button, player1);

        return;
    }
};