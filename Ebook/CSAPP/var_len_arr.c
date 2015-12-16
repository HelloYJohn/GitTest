#include <stdio.h>

int sum(int n)
{
    int a[n];
    int i , sum = 0;
    for(i = 0; i < n; i++) {
        a[i] = i * 3;
    }
    for(i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main(void)
{
    printf("%d\n",sum(5));
    return 0;
}
