#include <stdio.h>

int isSameSign(int x, int y)// x and y is not zero
{
    return (x ^ y) >= 0;
}

int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("x and y is %s\n", isSameSign(x, y) ? "same" : "different");
    return 0;
}
