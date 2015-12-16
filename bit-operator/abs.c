#include <stdio.h>

int abs(int n)
{
    return (n ^(n >> 31)) - (n >> 31);
}

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("abs is %d\n",abs(x));
    return 0;
}
