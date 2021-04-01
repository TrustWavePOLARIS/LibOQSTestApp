/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_openquantumsafe_Signature */

#ifndef _SIGNATURE_H_INCLUDED_
#define _SIGNATURE_H_INCLUDED_
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_openquantumsafe_Signature
 * Method:    create_sig_new
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_liboqs_Signature_create_1sig_1new
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_openquantumsafe_Signature
 * Method:    free_sig
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_liboqs_Signature_free_1sig
  (JNIEnv *, jobject);

/*
 * Class:     org_openquantumsafe_Signature
 * Method:    get_sig_details
 * Signature: ()Lcom/example/liboqstestapp/liboqs/Signature/SignatureDetails;
 */
JNIEXPORT jobject JNICALL Java_com_example_liboqs_Signature_get_1sig_1details
  (JNIEnv *, jobject);

/*
 * Class:     org_openquantumsafe_Signature
 * Method:    generate_keypair
 * Signature: ([B[B)I
 */
JNIEXPORT jint JNICALL Java_com_example_liboqs_Signature_generate_1keypair
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     org_openquantumsafe_Signature
 * Method:    import_secret_key
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_example_liboqs_Signature_import_1secret_1key
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_openquantumsafe_Signature
 * Method:    export_public_key
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_example_liboqs_Signature_export_1public_1key
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_openquantumsafe_Signature
 * Method:    export_secret_key
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_example_liboqs_Signature_export_1secret_1key
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_openquantumsafe_Signature
 * Method:    sign
 * Signature: ([BLjava/lang/Long;[BJ[B)I
 */
JNIEXPORT jint JNICALL Java_com_example_liboqs_Signature_sign
  (JNIEnv *, jobject, jbyteArray, jobject, jbyteArray, jlong, jbyteArray);

/*
 * Class:     org_openquantumsafe_Signature
 * Method:    verify
 * Signature: ([BJ[BJ[B)Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_liboqs_Signature_verify
  (JNIEnv *, jobject, jbyteArray, jlong, jbyteArray, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif