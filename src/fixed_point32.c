/* due to OpenCL 2.0 restriction, it's not able to include stdio.h */
// #include <stdio.h>
#include "fixed_point32.h"

/* Fixed point XXXX.XXXX, while the last 4 byte is under the point
   if input size is not equal to float size, return 1 and set error code 
   if successfully execute, return 0 */
size_t fixed_point32_add(void *fixed32_a, size_t fixed32_a_size, void *fixed32_b,
                         size_t fixed32_b_size, void *fixed32_ret, size_t *ret_size, enum error_code *err)
{

    if (fixed32_a_size != FIXED_POINT32_LENGTH || fixed32_b_size != FIXED_POINT32_LENGTH)
    {
        *err = OP_NOT_FIX_POINT;
        return 1;
    }
    unsigned a = *(unsigned *)fixed32_a;
    unsigned b = *(unsigned *)fixed32_b;
    unsigned ret = a + b;
    *((unsigned *)fixed32_ret) = ret;
    *ret_size = FIXED_POINT32_LENGTH;
    return 0;
}

/* Fixed point XXXX.XXXX, while the last 4 byte is under the point
   if input size is not equal to float size, return 1 and set error code 
   if successfully execute, return 0 */
size_t fixed_point32_mul(void *fixed32_a, size_t fixed32_a_size, void *fixed32_b,
                         size_t fixed32_b_size, void *fixed32_ret, size_t *ret_size, enum error_code *err)
{
    if (fixed32_a_size != FIXED_POINT32_LENGTH || fixed32_b_size != FIXED_POINT32_LENGTH)
    {
        *err = OP_NOT_FIX_POINT;
        return 1;
    }
    unsigned a = *(unsigned *)fixed32_a;
    unsigned b = *(unsigned *)fixed32_b;
    unsigned ret = a + b;
    *((unsigned *)fixed32_ret) = ret;
    *ret_size = FIXED_POINT32_LENGTH;
    return 0;
}

/* convert float to fixed point
   not considered denormalized float, since fixed_point32
   can't represent such a small value
   if successfully execute, return 0 */
size_t float2fixed_point32(float input, void *output, size_t output_size)
{
    unsigned ret = (unsigned)(input * (1 << FIXED_POINT32_OFFSET));
    *((unsigned *)output) = (void *)&ret;
    output_size = FIXED_POINT32_LENGTH;
}

/* test functionality */
/*
int main() {
    float a = 0.25;
    printf("a = %f, %x\n", a, *(unsigned *)&a);
    unsigned *b;
    float2fixed_point32(a,(void **)&b, 4);
    printf("b = %x\n", *b);
    return 0;
}
*/
