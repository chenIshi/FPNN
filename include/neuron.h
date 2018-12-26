#include <numerical.h>
#include "error_handle.h"

/* weight in every neuron */
typedef struct _weight
{
    num_t *val;
} weight;

/* bias in every neuron */
typedef struct _bias
{
    num_t *val;
} bias;

/* neuron itself */
typedef struct _neuron
{
    weight w;
    enum NUM_TYPE type;
    num_op op;
    size_t (*activation_function)(void *input,
                                  void *output,
                                  void *(*func_ptr)(void *, void *), 
                                  enum error_code *err);
} neuron;
