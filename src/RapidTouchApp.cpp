// Rapid Touch - Application Implementation

#include "RapidTouchPch.h"
#include "RapidTouchApp.h"

#include "LogoScene.h"


///////////////////////////////////////////////////////////////////////////////
//
// Rapid Touch App
//

RapidTouchApp::RapidTouchApp()
    : Application( 0 )
{
}


//
// Scene Actions
//

Scene* RapidTouchApp::CreateScene( Int sceneId )
{
    switch ( sceneId )
    {
    case SCENE_LOGO:
        return new LogoScene;
    }

    return nullptr;
}


///////////////////////////////////////////////////////////////////////////////
