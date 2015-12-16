#include <stdio.h>

int quyu(int m, int n)
{
    return m & (n - 1);
}

int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("x %% m = %d", quyu(x, y));
    return 0;
}
