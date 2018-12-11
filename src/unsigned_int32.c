#include "unsigned_int32.h"

/* ieee 754 like float numerical design, instead using unsigned to represent
   if input size is not equal to float size, return 1 and set error code 
   if successfully execute, return 0 */
size_t std_float32_add( void * unsigned32_a, size_t unsigned32_a_size, void * unsigned32_b, 
                        size_t unsigned32_b_size, void * unsigned32_ret, size_t *ret_size, enum error_code *err) {

    if (unsigned32_a_size != UNSIGNED32_LENGTH || unsigned32_b_size != UNSIGNED32_LENGTH) {
        *err = OP_NOT_UNSIGNED;
        return 1;
    }
    unsigned a = *(unsigned *)unsigned32_a;
    unsigned b = *(unsigned *)unsigned32_b;
    float ret = a + b;
    unsigned32_ret = (void *)&ret;
    *ret_size = UNSIGNED32_LENGTH;
    return 0;
}

/* ieee 754 like float numerical design, instead using unsigned to represent
   if input size is not equal to float size, return 1 and set error code 
   if successfully execute, return 0 */
size_t std_float32_mul( void * unsigned32_a, size_t unsigned32_a_size, void * unsigned32_b, 
                        size_t unsigned32_b_size, void * unsigned32_ret, size_t *ret_size, enum error_code *err) {
    if (unsigned32_a_size != UNSIGNED32_LENGTH || unsigned32_b_size != UNSIGNED32_LENGTH) {
        *err = OP_NOT_UNSIGNED;
        return 1;
    }
    unsigned a = *(unsigned *)unsigned32_a;
    unsigned b = *(unsigned *)unsigned32_b;
    float ret = a + b;
    unsigned32_ret = (void *)&ret;
    *ret_size = UNSIGNED32_LENGTH;
    return 0;
}

/* convert float to unsigned int
   if successfully execute, return 0 */
size_t float2fixed32(float input, void *output, size_t output_size) {
    unsigned temp = *(unsigned *)&input;
    output = (void *)&temp;
    output_size = UNSIGNED32_LENGTH;
}