#include <jni.h>

extern "C" JNIEXPORT jstring

JNICALL

Java_com_jeryzhang_common_jnitest_JNIUtils_sayHelloFromJNI(JNIEnv *env, jclass type) {
    return env->NewStringUTF("adfasfs");
}