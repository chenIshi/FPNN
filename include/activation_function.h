#include "numerical.h"
#include "error_handle.h"

size_t activation_function(void *input,
                           size_t input_size,
                           void *output,
                           size_t *output_size,
                           enum error_code *err);