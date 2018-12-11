/* Different numerical variants representations and corresponding calculation 
   Such as standard_float32 (IEEE 754 version), fixed_point32, or unsigned_int32
   standard_float32 is control group, fixed_point32 is test group for performance
   in different numerical structure, and unsigned_int32 is test group for hardware
   and software optimization
   
   2018.12.10 Chen YI-XI at Cheng Kung University */

/* Different test group subject */
enum NUM_TYPE {
    STANDARD_FLOAT32,
    FIX_POINT32,
    UNSIGNED_INT32
};

/* mostly for variable types of weights */
typedef struct _num_t {
    enum NUM_TYPE num_type;
    void *(*num_handler)();
} num_t;

#define STD_FLOAT32_LENGTH 4
#define FIXED_POINT32_LENGTH 4
#define UNSIGNED32_LENGTH 4
#define FIXED_POINT32_OFFSET 16

#define size_t long

