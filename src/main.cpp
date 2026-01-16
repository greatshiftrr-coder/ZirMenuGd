#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(ZirMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        auto btn = CCMenuItemSpriteExtra::create(
            CircleButtonSprite::createWithSpriteFrameName("geode.loader/geode-logo.png"),
            this,
            menu_selector(ZirMenuLayer::onZirMenu)
        );

        auto menu = this->getChildByID("main-menu");
        menu->addChild(btn);
        menu->updateLayout();
        return true;
    }

    void onZirMenu(CCObject*) {
        FLAlertLayer::create("ZirMenu", "ZirMenu is successfully loaded!", "Close")->show();
    }
};

