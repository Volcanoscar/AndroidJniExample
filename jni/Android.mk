LOCAL_PATH:=$(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:=jnitest

LOCAL_SRC_FILES:=JniExample.cpp

LOCAL_LDLIBS :=  -lz -llog -L$(SYSROOT)/usr/lib  
include $(BUILD_SHARED_LIBRARY)
