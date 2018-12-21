#ifndef ACTIVATION_FUNCTION_H
#define ACTIVATION_FUNCTION_H
#include "numerical.h"
#include "error_handle.h"
#define comb(X, Y) X##_##Y

size_t activation_function_float(void *input,
                                 void *output,
                                 void *(*func_ptr)(void *),
                                 enum error_code *err);

size_t activation_function_fixed(void *input,
                                 void *output,
                                 void *(*func_ptr)(void *),
                                 enum error_code *err);

void *relu_float(void *input, void *output);

void *relu_fixed(void *input, void *output);
#endif