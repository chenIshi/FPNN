#include "numerical.h"
#include "error_handle.h"

size_t std_float32_add( void *float32_a, 
                        size_t float32_a_size, 
                        void *float32_b, 
                        size_t float32_b_size, 
                        void **float32_ret, 
                        size_t *ret_size,
                        enum error_code *err);

size_t std_float32_mul( void *float32_a,
                        size_t float32_a_size,
                        void *float32_b,
                        size_t float32_b_size,
                        void **float32_ret,
                        size_t *ret_size,
                        enum error_code *err);

size_t float2std_float32(   float input,
                            void **output,
                            size_t output_size);