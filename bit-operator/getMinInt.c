#include <stdio.h>

int getMinInt1()
{
    return 1 << 31;
}

int main(void)
{
    printf("the min is %d\n", getMinInt1());
    return 0;
}



