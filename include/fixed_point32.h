#define size_t unsigned long

#include "numerical.h"
#include "error_handle.h"

size_t fixed_point32_add(   void * fixed32_a, 
                            size_t fixed32_a_size, 
                            void * fixed32_b, 
                            size_t fixed32_b_size, 
                            void * fixed32_ret, 
                            size_t *ret_size,
                            enum error_code *err);

size_t fixed_point32_mul(   void * fixed32_a,
                            size_t fixed32_a_size,
                            void * fixed32_b,
                            size_t fixed32_b_size,
                            void * fixed32_ret,
                            size_t *ret_size,
                            enum error_code *err);