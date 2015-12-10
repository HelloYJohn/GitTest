#include "t.h"

#define A 1
#define B (2+A)
#define macfun \
    long a, b;\

long myfunc(long a, long b, long c, long d,
            long e, long f, long g, long h)
{
    long xx = a * b * c * d * e * f * g * h;
    long yy = a + b + c + d + e + f + g + h;
    long zz = utilfunc(xx, yy, xx % yy);
    return zz + 20;
}

int main(int argc, char *argv[])
{
    macfun
    a = myfunc(1,3,4,3,2,3,3,3);
    return 0;
}
