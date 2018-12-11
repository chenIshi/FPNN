#include "numerical.h"
#include "error_handle.h"

size_t unsigned_int32_add(  void *unsigned32_a, 
                            size_t unsigned32_a_size, 
                            void *unsigned32_b, 
                            size_t unsigned32_b_size, 
                            void *unsigned32_ret, 
                            size_t *ret_size,
                            enum error_code *err);

size_t unsigned_int32_mul(  void *unsigned32_a,
                            size_t unsigned32_a_size,
                            void *unsigned32_b,
                            size_t unsigned32_b_size,
                            void *unsigned32_ret,
                            size_t *ret_size,
                            enum error_code *err);

size_t float2unsigned32(    float input,
                            void *output,
                            size_t output_size);