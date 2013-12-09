// Rapid Touch - Win32 Main Entry

#include "RapidTouchPch.h"
 
#include "RapidTouchApp.h"
#include <Windows.h>
 
#if defined( _DEBUG )
#include <vld.h>
#endif
 
 
using namespace cocos2d;
 
int CALLBACK wWinMain(
    HINSTANCE instance, HINSTANCE prevInstance, WCHAR* cmdLine, int cmdShow )
{
    RapidTouchApp app;
 
    ApplicationSettings s;
    s.title = "Rapid Touch";
    s.desktop.frameWidth  = 480;
    s.desktop.frameHeight = 640;
    s.desktop.assetsPath  = "..\\Assets";

    return app.Run( s );
}
