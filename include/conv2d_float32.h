#define size_t unsigned long

#include "numerical.h"
#include "error_handle.h"

size_t conv2d_float32( void** float_32_input,
                    void** float_32_output,
                    unsigned kernel_size_x,
                    unsigned kernel_size_y,
                    unsigned number_of_kernel,
                    unsigned strides,
                    char *padding
                    );