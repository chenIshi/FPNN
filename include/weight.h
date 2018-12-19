#include <numerical.h>

/* weight in every neuron */
typedef struct _weight
{
    enum NUM_TYPE type;
    num_t *val;
    num_op op;
} weight;