/* KallistiOS ##version##

   dc/vec3f.h
   Copyright (C) 2013, 2014 Josh "PH3NOM" Pearson

*/

/** \file   dc/vec3f.h
    \brief  Basic matrix operations.

    This file contains various basic vector math functionality for using the
    SH4's vector instructions. Higher level functionality in KGL is built off
    of these.

    \author Josh "PH3NOM" Pearson
    \see    dc/matrix.h
	
	C:\cygwin\usr\local\dc\kos1.3\kos\kernel\arch\dreamcast\include\dc
*/

#ifndef __DC_VEC3F_H
#define __DC_VEC3F_H

#include <sys/cdefs.h>
#include <math.h>
__BEGIN_DECLS

typedef struct vec3f {
    float x, y, z;
} vec3f_t;

#define R_DEG 182.04444443623349541909523793743
#define R_RAD 10430.37835

/**
 * Calculates the dot product of two vec3's
 *
 * @param {vec3} a the first operand
 * @param {vec3} b the second operand
 * @returns {Number} dot product of a and b
 */
void vec3f_dot(float x, float y, float z, float x2, float y2, float z2, float* result) {
    *result = x * x2 + y * y2 + z * z2;
}
    
    
    /**
 * Calculates the squared length of a vec3
 *
 * @param {vec3} a vector to calculate squared length of
 * @returns {Number} squared length of a
 */
float vec3f_squaredLength(float x, float y, float z) {
    return x*x + y*y + z*z;
}

    /**
 * Calculates the length of a vec3
 *
 * @param {vec3} a vector to calculate length of
 * @returns {Number} length of a
 */
void vec3f_length(float x, float y, float z, float *res) {
    *res = sqrtf(vec3f_squaredLength(x, y, z));
}

/** \brief  Macro to return the Euclidean distance between two 3d vectors.

    This macro is an inline assembly operation using the SH4's fast
    (approximate) math instructions, and returns a single-precision
    floating-point value.

    \param  x1               The X coordinate of first vector.
    \param  y1               The Y coordinate of first vector.
    \param  z1               The Z coordinate of first vector.
    \param  x2               The X coordinate of second vector.
    \param  y2               The Y coordinate of second vector.
    \param  z2               The Z coordinate of second vector.
    \param  w                The result of the calculation.
*/
/*#define vec3f_distance(x1, y1, z1, x2, y2, z2, w) { \
        register float __x  __asm__("fr0") = (x2-x1); \
        register float __y  __asm__("fr1") = (y2-y1); \
        register float __z  __asm__("fr2") = (z2-z1); \
        register float __w  __asm__("fr3"); \
        __asm__ __volatile__( \
                       "fldi0 fr3\n" \
                              "fipr  fv0,fv0\n" \
                              "fsqrt fr3\n" \
                              : "+f" (__w) \
                              : "f" (__x), "f" (__y), "f" (__z), "f" (__w) \
                            ); \
        w = __w; \
    }
*/

void vec3f_normalize(float *x, float *y, float *z) {
    float len; 
	vec3f_length(*x,*y,*z, &len);
    if (len > 0) {
        //TODO: evaluate use of glm_invsqrt here?
        len = 1 / sqrt(len);
        *x = *x * len;
        *y = *y * len;
        *z = *z * len;
    }
}

/** \brief  Macro to return the normalized version of a vector minus another
            vector.

    This macro is an inline assembly operation using the SH4's fast
    (approximate) math instructions. The return vector is stored into the third
    vertex parameter: x3, y3, and z3.

    \param  x1               The X coordinate of first vector.
    \param  y1               The Y coordinate of first vector.
    \param  z1               The Z coordinate of first vector.
    \param  x2               The X coordinate of second vector.
    \param  y2               The Y coordinate of second vector.
    \param  z2               The Z coordinate of second vector.
    \param  x3               The X coordinate of output vector.
    \param  y3               The Y coordinate of output vector.
    \param  z3               The Z coordinate of output vector.
*/
void vec3f_sub_normalize(float x, float y, float z, float x2, float y2, float z2, float* x3, float* y3, float* z3) {
    vec3f_normalize(&x,&y,&z);
	*x3 = x-x2;
	*y3 = y-y2;
	*z3 = z-z2;
}

__END_DECLS

#endif /* !__DC_VEC3F_H */
