#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(ZirMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;
        
        // This creates a button using the Geode logo
        auto btn = CCMenuItemSpriteExtra::create(
            CircleButtonSprite::createWithSpriteFrameName("geode.loader/geode-logo.png"),
            this,
            menu_selector(ZirMenuLayer::onZirMenu)
        );
        
        // This adds the button to the main menu list
        auto menu = this->getChildByID("main-menu");
        if (menu) {
            menu->addChild(btn);
            menu->updateLayout();
        }

        return true;
    }

    // This is what happens when you click the button
    void onZirMenu(CCObject*) {
        FLAlertLayer::create("ZirMenu", "ZirMenu is successfully loaded on Android!", "Close")->show();
    }
};

