#include "numerical.h"
#include "error_handle.h"

#define comb(X, Y) X_##Y

#ifndef numtype
#define numtype unsigned
#endif

#if numtype == float
#define num_t float
#endif

#if numtype == fixed
#define num_t unsigned
#endif

#define activation_function comb(activation_function, numtype)

size_t activation_function(void *input, void *output, void *(*func_ptr)(void *, void *), enum error_code *err)
{
    output = func_ptr(input, output);
}

#define relu comb(relu, numtype)

void *relu(void *input, void *output) {
    if ((*(num_t *)input) < 0) {
        *(num_t *)output = 0;
    }
    else
        return output;
}

#undef numtype
#undef num_t