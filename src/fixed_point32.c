#include "fixed_point32.h"

/* Fixed point XXXX.XXXX, while the last 4 byte is under the point
   if input size is not equal to float size, return 1 and set error code 
   if successfully execute, return 0 */
size_t std_float32_add( void *fixed32_a, size_t fixed32_a_size, void *fixed32_b, 
                        size_t fixed32_b_size, void *fixed32_ret, size_t *ret_size, enum error_code *err) {

    if (fixed32_a_size != FIXED_POINT32_LENGTH || fixed32_b_size != FIXED_POINT32_LENGTH) {
        *err = OP_NOT_FIX_POINT;
        return 1;
    }
    unsigned a = *(unsigned *)fixed32_a;
    unsigned b = *(unsigned *)fixed32_b;
    unsigned ret = a + b;
    fixed32_ret = (void *)&ret;
    *ret_size = FIXED_POINT32_LENGTH;
    return 0;
}

/* Fixed point XXXX.XXXX, while the last 4 byte is under the point
   if input size is not equal to float size, return 1 and set error code 
   if successfully execute, return 0 */
size_t std_float32_mul( void *fixed32_a, size_t fixed32_a_size, void *fixed32_b, 
                        size_t fixed32_b_size, void *fixed32_ret, size_t *ret_size, enum error_code *err) {
    if (fixed32_a_size != FIXED_POINT32_LENGTH || fixed32_b_size != FIXED_POINT32_LENGTH) {
        *err = OP_NOT_FIX_POINT;
        return 1;
    }
    unsigned a = *(unsigned *)fixed32_a;
    unsigned b = *(unsigned *)fixed32_b;
    unsigned ret = a + b;
    fixed32_ret = (void *)&ret;
    *ret_size = FIXED_POINT32_LENGTH;
    return 0;
}

/* convert float to fixed point
   not considered denormalized float, since fixed_point32
   can't represent such a small value
   if successfully execute, return 0 */
size_t float2fixed32(float input, void *output, size_t output_size) {
    unsigned temp = *(unsigned *)&input;
    unsigned mantissa = temp & 0x0007FFFF;
    unsigned exponential = (temp & 0x7FF80000) - 127;
    unsigned sign = temp & 0x80000000;
    unsigned val = mantissa << exponential;
    /* transform unsigned val into signed one */
    val = (!sign) * mantissa + (sign * (~mantissa) + sign);
    output = (void *)&val;
    output_size = FIXED_POINT32_LENGTH;
}