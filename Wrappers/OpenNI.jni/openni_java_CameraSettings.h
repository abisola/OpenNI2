/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class openni_java_CameraSettings */

#ifndef _Included_openni_java_CameraSettings
#define _Included_openni_java_CameraSettings
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     openni_java_CameraSettings
 * Method:    setAutoExposureEnabled
 * Signature: (ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_CameraSettings_setAutoExposureEnabled
  (JNIEnv *, jobject, jboolean, jlong);

/*
 * Class:     openni_java_CameraSettings
 * Method:    setAutoWhiteBalanceEnabled
 * Signature: (ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_CameraSettings_setAutoWhiteBalanceEnabled
  (JNIEnv *, jobject, jboolean, jlong);

/*
 * Class:     openni_java_CameraSettings
 * Method:    getAutoExposureEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_CameraSettings_getAutoExposureEnabled
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_CameraSettings
 * Method:    getAutoWhiteBalanceEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_CameraSettings_getAutoWhiteBalanceEnabled
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_CameraSettings
 * Method:    isValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_CameraSettings_isValid
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_CameraSettings
 * Method:    CameraSettings
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_CameraSettings_CameraSettings__
  (JNIEnv *, jobject);



#ifdef __cplusplus
}
#endif
#endif