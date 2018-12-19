#include "standard_float32.h"

/* standard ieee 754 float point addition 
   if input size is not equal to float size, return 1 and set error code 
   if successfully execute, return 0 */
size_t std_float32_add(void *float32_a, size_t float32_a_size, void *float32_b,
                       size_t float32_b_size, void **float32_ret, size_t *ret_size, enum error_code *err)
{

    /* check the size of input */
    if (float32_a_size != STD_FLOAT32_LENGTH || float32_b_size != STD_FLOAT32_LENGTH)
    {
        *err = OP_NOT_STD_FLOAT;
        return 1;
    }

    /* a plus b and store the result to c */
    float a = *(float *)float32_a;
    float b = *(float *)float32_b;
    float ret = a + b;
    *float32_ret = (void *)&ret;
    *ret_size = STD_FLOAT32_LENGTH;
    return 0;
}

/* standard ieee 754 float point multipication 
   if input size is not equal to float size, return 1 and set error code 
   if successfully execute, return 0 */
size_t std_float32_mul(void *float32_a, size_t float32_a_size, void *float32_b,
                       size_t float32_b_size, void **float32_ret, size_t *ret_size, enum error_code *err)
{

    /* check the size of input */
    if (float32_a_size != STD_FLOAT32_LENGTH || float32_b_size != STD_FLOAT32_LENGTH)
    {
        *err = OP_NOT_STD_FLOAT;
        return 1;
    }

    /* a mul b and store the result to c */
    float a = *(float *)float32_a;
    float b = *(float *)float32_b;
    float ret = a * b;
    *float32_ret = (void *)&ret;
    *ret_size = STD_FLOAT32_LENGTH;
    return 0;
}

/* convert float to ieee 754 standard float
   if successfully execute, return 0 */
size_t float2std_float32(float input, void **output, size_t output_size)
{
    *output = (void *)&input;
    output_size = STD_FLOAT32_LENGTH;
    return 0;
}