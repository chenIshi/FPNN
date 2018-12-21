#ifndef ACTIVATION_FUNCTION_H
#define ACTIVATION_FUNCTION_H
#include "numerical.h"
#include "error_handle.h"
#define _comb(X, Y) X##_##Y
#define comb(X, Y) _comb(X, Y)

size_t activation_function_float(void *input,
                                 void *output,
                                 void *(*func_ptr)(void *, void *),
                                 enum error_code *err);

size_t activation_function_fixed(void *input,
                                 void *output,
                                 void *(*func_ptr)(void *, void *),
                                 enum error_code *err);

void *relu_float(void *input, void *output);

void *relu_fixed(void *input, void *output);
#endif