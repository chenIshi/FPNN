enum NUM_TYPE {
    STANDARD_FLOAT32,
    FIX_POINT32,
    UNSIGNED_INT32
};

typedef struct _num_t {
    enum NUM_TYPE;
    void *(*num_handler)();
} num_t;