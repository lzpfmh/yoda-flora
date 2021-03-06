#pragma once

#include "jni.h"
#include "caps.h"

#define TAG "flora-cli.jni"

typedef struct {
	std::shared_ptr<Caps> caps;
} CapsNativeHandle;

int register_com_rokid_flora_Caps(JNIEnv* env);
int register_com_rokid_flora_Client(JNIEnv* env);
