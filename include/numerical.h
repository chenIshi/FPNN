/* Different numerical variants representations and corresponding calculation 
   Such as standard_float32 (IEEE 754 version), fixed_point32, or unsigned_int32
   standard_float32 is control group, fixed_point32 is test group for performance
   in different numerical structure, and unsigned_int32 is test group for hardware
   and software optimization
   
   2018.12.10 Chen YI-XI at Cheng Kung University */

/* Different test group subject */

#define size_t long

#define STD_FLOAT32_LENGTH 4
#define FIXED_POINT32_LENGTH 4
#define UNSIGNED32_LENGTH 4
#define FIXED_POINT32_OFFSET 16

enum NUM_TYPE {
    STANDARD_FLOAT32,
    FIX_POINT32,
    UNSIGNED_INT32
};

/* mostly for variable types of weights */
#define num_t void *

typedef struct _num_op {
    /* "add" implementation in specific target format of number */
    size_t (*adder_handler)();
    /* "multiple" implementation in specific target format of number */
    size_t (*multi_handler)();
    /* cast from float to target format of number */
    size_t (*float2num)();
} num_op;



