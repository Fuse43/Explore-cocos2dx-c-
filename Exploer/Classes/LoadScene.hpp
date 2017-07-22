//
//  LoadScene.hpp
//  MyCppGame
//
//  Created by 不式 on 2017/7/21.
//
//

#ifndef LoadScene_hpp
#define LoadScene_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "ui/CocosGUI.h"
USING_NS_CC;


class LoadScene:public Layer{
public:
    static Scene* createScene();
    CREATE_FUNC(LoadScene);
    virtual bool init();
    void Loading();
    
    
private:
    Sprite bg;
    cocos2d::ui::LoadingBar * loadingbar;
    
    



};

#endif /* LodeScence_hpp */
