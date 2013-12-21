APP_PLATFORM := android-10
APP_ABI := x86 armeabi
APP_STL := gnustl_static

APP_CFLAGS := -fexceptions
APP_CPPFLAGS := -std=c++11 -frtti

ifeq ($(NDEBUG),1)

# Release
APP_OPTIM := release
TOFFEE_CONFIG := Release

else

# Debug
APP_OPTIM := debug
TOFFEE_CONFIG := Debug
APP_CFLAGS += -g -DCOCOS2D_DEBUG=1

endif 

NDK_APP_OUT := obj/$(TOFFEE_CONFIG)
NDK_TOOLCHAIN_VERSION := 4.8