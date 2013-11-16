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
    s.win32FrameWidth  = 480;
    s.win32FrameHeight = 640;
    s.win32FrameTitle  = "Rapid Touch";
    s.win32AssetsPath  = "..\\Assets";

    return app.Run( s );
}
