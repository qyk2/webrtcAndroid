// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/StatsReport

#ifndef org_webrtc_StatsReport_JNI
#define org_webrtc_StatsReport_JNI

#include <jni.h>

#include "../../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_StatsReport[];
const char kClassPath_org_webrtc_StatsReport[] = "org/webrtc/StatsReport";

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_StatsReport_00024Value[];
const char kClassPath_org_webrtc_StatsReport_00024Value[] = "org/webrtc/StatsReport$Value";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_StatsReport_clazz(nullptr);
#ifndef org_webrtc_StatsReport_clazz_defined
#define org_webrtc_StatsReport_clazz_defined
inline jclass org_webrtc_StatsReport_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_StatsReport,
      &g_org_webrtc_StatsReport_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_StatsReport_00024Value_clazz(nullptr);
#ifndef org_webrtc_StatsReport_00024Value_clazz_defined
#define org_webrtc_StatsReport_00024Value_clazz_defined
inline jclass org_webrtc_StatsReport_00024Value_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_StatsReport_00024Value,
      &g_org_webrtc_StatsReport_00024Value_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {


static std::atomic<jmethodID> g_org_webrtc_StatsReport_00024Value_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_Value_Constructor(JNIEnv* env, const
    base::android::JavaRef<jstring>& name,
    const base::android::JavaRef<jstring>& value) {
  jclass clazz = org_webrtc_StatsReport_00024Value_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_StatsReport_00024Value_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(Ljava/lang/String;Ljava/lang/String;)V",
          &g_org_webrtc_StatsReport_00024Value_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, name.obj(), value.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_StatsReport_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_StatsReport_Constructor(JNIEnv* env, const
    base::android::JavaRef<jstring>& id,
    const base::android::JavaRef<jstring>& type,
    jdouble timestamp,
    const base::android::JavaRef<jobjectArray>& values) {
  jclass clazz = org_webrtc_StatsReport_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_StatsReport_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(Ljava/lang/String;Ljava/lang/String;D[Lorg/webrtc/StatsReport$Value;)V",
          &g_org_webrtc_StatsReport_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, id.obj(), type.obj(), timestamp, values.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_StatsReport_JNI
