// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/NV21Buffer

#ifndef org_webrtc_NV21Buffer_JNI
#define org_webrtc_NV21Buffer_JNI

#include <jni.h>

#include "../../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_NV21Buffer[];
const char kClassPath_org_webrtc_NV21Buffer[] = "org/webrtc/NV21Buffer";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_NV21Buffer_clazz(nullptr);
#ifndef org_webrtc_NV21Buffer_clazz_defined
#define org_webrtc_NV21Buffer_clazz_defined
inline jclass org_webrtc_NV21Buffer_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_NV21Buffer,
      &g_org_webrtc_NV21Buffer_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static void JNI_NV21Buffer_CropAndScale(JNIEnv* env, jint cropX,
    jint cropY,
    jint cropWidth,
    jint cropHeight,
    jint scaleWidth,
    jint scaleHeight,
    const base::android::JavaParamRef<jbyteArray>& src,
    jint srcWidth,
    jint srcHeight,
    const base::android::JavaParamRef<jobject>& dstY,
    jint dstStrideY,
    const base::android::JavaParamRef<jobject>& dstU,
    jint dstStrideU,
    const base::android::JavaParamRef<jobject>& dstV,
    jint dstStrideV);

JNI_GENERATOR_EXPORT void Java_org_webrtc_NV21Buffer_nativeCropAndScale(
    JNIEnv* env,
    jclass jcaller,
    jint cropX,
    jint cropY,
    jint cropWidth,
    jint cropHeight,
    jint scaleWidth,
    jint scaleHeight,
    jbyteArray src,
    jint srcWidth,
    jint srcHeight,
    jobject dstY,
    jint dstStrideY,
    jobject dstU,
    jint dstStrideU,
    jobject dstV,
    jint dstStrideV) {
  return JNI_NV21Buffer_CropAndScale(env, cropX, cropY, cropWidth, cropHeight, scaleWidth,
      scaleHeight, base::android::JavaParamRef<jbyteArray>(env, src), srcWidth, srcHeight,
      base::android::JavaParamRef<jobject>(env, dstY), dstStrideY,
      base::android::JavaParamRef<jobject>(env, dstU), dstStrideU,
      base::android::JavaParamRef<jobject>(env, dstV), dstStrideV);
}


}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_NV21Buffer_JNI
