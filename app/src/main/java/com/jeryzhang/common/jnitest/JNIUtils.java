package com.jeryzhang.common.jnitest;

public class JNIUtils {

    static {
        System.loadLibrary("JNIHello");
    }
    public static native String sayHelloFromJNI();
}
