LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	SoftSPRDAVC.cpp \

LOCAL_CFLAGS := \
	-DOSCL_EXPORT_REF= \
	-DOSCL_IMPORT_REF=

LOCAL_ARM_MODE := arm

LOCAL_SHARED_LIBRARIES := \
	libmedia_omx \
	libstagefright_omx \
	libstagefright_foundation \
	libstagefrighthw \
	libmemoryheapion_sprd \
	libutils \
	libdl \
	liblog \

LOCAL_MODULE := libstagefright_sprd_soft_h264dec
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

include $(BUILD_SHARED_LIBRARY)

