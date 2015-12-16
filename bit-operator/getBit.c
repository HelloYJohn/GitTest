#include <stdio.h>

int getBit(int n, int m)
{
    return (n >> (m - 1)) & 1;
}

int main()
{
    int x, y;
    scanf("%d%d",&x, &y);
    printf("x num y bit is %d\n", getBit(x,y));
    return 0;
}
