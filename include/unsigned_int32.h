#define size_t unsigned long

#include "numerical.h"
#include "error_handle.h"

size_t unsigned_int32_add(  void * float32_a, 
                            size_t float32_a_size, 
                            void * float32_b, 
                            size_t float32_b_size, 
                            void * float32_ret, 
                            size_t *ret_size);

size_t unsigned_int32_mul(  void * float32_a,
                            size_t float32_a_size,
                            void * float32_b,
                            size_t float32_b_size,
                            void * float32_ret,
                            size_t *ret_size);