#include <stdio.h>

int isFactorialofTwo(int n)
{
    return n > 0 ? (n & (n - 1)) == 0 : 0;
}

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("x is factorial of two %s\n", isFactorialofTwo(x) ? "true" : "false");
    return 0;
}
