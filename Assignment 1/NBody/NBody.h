// Header guards prevent the contents of the header from being defined multiple times where there are circular dependencies
#ifndef __NBODY_HEADER__
#define __NBODY_HEADER__

#define USER_NAME "acb16zje"

#define G           9.8f    // gravitational constant
#define dt          0.01f   // time step
#define SOFTENING   2.0f    // softening parameter to help with numerical instability

typedef struct nbody {
    float x, y, vx, vy, m;
} nbody;

typedef struct vector {
    float x, y;
} vector;

typedef enum MODE { CPU, OPENMP, CUDA } MODE;

// Optimisation: inlining `magnitude` function
#define MAGNITUDE(x, y) ((float)sqrtf((x) * (x) + (y) * (y))

// Function declarations
vector force(nbody *body, nbody *nbodies);

#endif	//__NBODY_HEADER__
