#include <stdio.h>

#define defsum(x, y)  (x)+(y)
int main(int argc, char *argv[])
{
    int x, y, sum;
    scanf("%d, %d", &x, &y);
    sum = defsum(x, y);
    printf("sum is %d\n", sum);
    return 0;
}

