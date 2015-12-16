#include <stdio.h>

int min(int a, int b)
{
    return (a & ((a - b) >> 31)) | (b & (~(a - b) >> 31)); 
}

int min1(int x, int y)
{
    return y ^ ((x ^ y) & -(x < y));
}
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("the min of x and y is %d\n", min(x, y));
    printf("the min of x and y is %d\n", min1(x, y));
    return 0;
}
