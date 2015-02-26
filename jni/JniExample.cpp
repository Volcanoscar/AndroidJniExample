#include <jni.h>
#include <string.h>


 extern "C" {
     JNIEXPORT jstring JNICALL Java_com_example_jniexample_JNIUtil_getStringFromJni(JNIEnv * env, jobject obj);
 };

 JNIEXPORT jstring JNICALL Java_com_example_jniexample_JNIUtil_getStringFromJni(JNIEnv * env, jobject obj)
 {
	 return env->NewStringUTF("Hello From JNI");
 }
