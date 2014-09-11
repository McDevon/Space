//
//  TestScene.h
//  Space
//
//  Created by Jussi Enroos on 9.9.2014.
//
//

#ifndef __Space__TestScene__
#define __Space__TestScene__

#include "cocos2d.h"

class TestScene : public cocos2d::Layer
{
private:
    cocos2d::Menu* m_menu;
    cocos2d::Sprite* m_sprite;
    
    void testTypes();
    
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void update(float dt);
    
    // implement the "static create()" method manually
    CREATE_FUNC(TestScene);
};


#endif /* defined(__Space__TestScene__) */
