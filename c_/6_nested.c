#include <stdio.h>
// two ways

struct A
{
   // members
};

struct B
{
    struct A member_of_B;
};

// second ways embered
struct c{
    // memevers
    struct D{
        //memeverse
    }varname; //   **********8               imp   it is very imp to name here

};
