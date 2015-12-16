#include <stdio.h>

int setBitToOne(int n, int m)
{
    return n | (1 << (m - 1));
}

int main()
{
    int x, y;
    scanf("%d%d", &x,&y);
    printf("x set y bit 1 is %d\n", setBitToOne(x, y));
    return 0;
}
