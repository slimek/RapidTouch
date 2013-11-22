#include "RapidTouchPch.h"

#include "RapidTouchApp.h"


namespace Toffee
{

void NativeInit( Application*& app, ApplicationSettings& s )
{
    app = new RapidTouchApp;
}

} // namespace Toffee
