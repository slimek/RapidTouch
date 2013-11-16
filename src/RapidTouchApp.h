// Rapid Touch - Application Header

#ifndef __RAPID_TOUCH_RAPID_TOUCH_APP_H
#define __RAPID_TOUCH_RAPID_TOUCH_APP_H

#pragma once

#include "RapidTouch.h"
#include <Toffee/Core/Application.h>


class RapidTouchApp : public Application
{
public:
   
   RapidTouchApp();


private:

    /// Scene Actions ///

    Scene* CreateScene( int sceneId ) override;
};


#endif // __RAPID_TOUCH_RAPID_TOUCH_APP_H
