#ifndef _T_H
#define _T_H
#include <stdio.h> 

static inline long utilfunc(long a, long b, long c)
{
    long xx = a + 2;
    long yy = b + 3;
    long zz = c + 4;
    long sum = xx + yy + zz;

    return xx * yy * zz + sum;
}

#endif
