//
// Created by gaoje on 3/29/2021.
//

/*
 * If this header is included in a C file, the extern is ignored
 * If included in a C++ file, the extern will be included to deal with function overloading
 */

#ifdef __cplusplus
extern "C" {
#endif

int sumI(int a, int b);
float sumF(float a, float b);

#ifdef __cplusplus
} // end extern "C"
#endif
