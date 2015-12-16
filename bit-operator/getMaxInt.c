#include <stdio.h>

int getMaxInt1()
{
    return (1 << 31) - 1;
}

int getMaxInt2()
{
    return ~(1 << 31);
}

int getMaxInt3()
{
    return ((unsigned int) - 1) >> 1;
}
int main(void)
{
    printf("get the max int1 :%d\n", getMaxInt1());
    printf("get the max int2 :%d\n", getMaxInt2());
    printf("get the max int3 :%d\n", getMaxInt3());
    return 0;
}
