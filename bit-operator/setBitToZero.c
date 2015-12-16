#include <stdio.h>

int setBitToZero(int n, int m)
{
    return n & ~(1 << (m - 1));
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("x set y bit 0 is %d\n", setBitToZero(x, y));
    return 0;
}
