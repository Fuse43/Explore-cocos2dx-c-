//
//  LodeScence.cpp
//  MyCppGame
//
//  Created by 不式 on 2017/7/21.
//
//

#include "LoadScene.hpp"



Scene* LoadScene::createScene(){
    
    Scene *scene = Scene::create();
    Layer *loadlayer = LoadScene::create();
    scene->addChild(loadlayer);
    return scene;

}

bool LoadScene::init(){
    if(!Layer::init()){
        return false;
    }
    
    
    
    return true;


}
void Loading(){


}
