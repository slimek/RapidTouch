// Rapid Touch - Logo Scene Implementation

#include "RapidTouchPch.h"
#include "LogoScene.h"


///////////////////////////////////////////////////////////////////////////////
//
// Logo Scene
//

void LogoScene::OnSceneEnter()
{
    const CCSize size = this->getContentSize();

    auto sprite = CCSprite::create( "texture/lake_castle.jpg" );
    sprite->setPosition( ccp( size.width / 2, size.height / 2 ));

    this->addChild( sprite );
}


///////////////////////////////////////////////////////////////////////////////
