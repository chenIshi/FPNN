#ifndef ACTIVATION_FUNCTION_H
#include "activation_function.h"
#endif

#ifndef NUMTYPE
#define NUMTYPE float
#endif

#if NUMTYPE == float
#define DATA_TYPE float
#elif NUMTYPE == fixed
#define DATA_TYPE unsigned
#endif

#define activation_function comb(activation_function, NUMTYPE)
#define relu comb(relu, NUMTYPE)


size_t activation_function(void *input, void *output, void *(*func_ptr)(void *, void *), enum error_code *err)
{
    output = func_ptr(input, output);
    return 0;
}



void *relu(void *input, void *output)
{
    if ((*(DATA_TYPE *)input) < 0)
    {
        *(DATA_TYPE *)output = 0;
    }
    else
        return output;
}

#undef NUMTYPE
#undef DATA_TYPE
#undef activation_function
#undef relu