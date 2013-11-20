RT_LOCAL_PATH := $(call my-dir)

#
# Include Pre-built Libraries
#

include $(GIT_ROOT)/Toffee/proj.android/jni/PrebuiltLibs.mk


#
# Build RapidTouch
#

include $(CLEAR_VARS)

LOCAL_PATH := $(RT_LOCAL_PATH)

LOCAL_MODULE := RapidTouch

RT_SRC := ../../src

LOCAL_SRC_FILES := \
	$(RT_SRC)/LogoScene.cpp \
	$(RT_SRC)/RapidTouchApp.cpp \
	$(RT_SRC)/RapidTouchPch.cpp

LOCAL_C_INCLUDES := \
	../../src \
	$(TOFFEE_C_INCLUDES)

LOCAL_LDLIBS := \
	$(TOFFEE_LDLIBS)

LOCAL_WHOLE_STATIC_LIBRARIES := \
    Toffee \
    Caramel \
	$(TOFFEE_STATIC_LIBRARIES)

include $(BUILD_SHARED_LIBRARY)


#
# Import Toffee and Caramel
#

include $(call import-add-path,$(GIT_ROOT)/)
include $(call import-module,Toffee/proj.android/jni)
include $(call import-module,Caramel/proj.android/jni)

