#include <stdio.h>

int max(int a, int b)
{
    return (b & ((a - b) >> 31)) | (a & (~(a - b) >> 31));
}

int max1(int x, int y)
{
    return x ^ ((x ^ y) & -(x < y));
}

int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("max of x and y is %d\n", max(x, y));
    printf("max of x and y is %d\n", max1(x, y));
    return 0;
}

