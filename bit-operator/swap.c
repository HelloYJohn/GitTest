#include <stdio.h>

void swap(int *a, int *b)
{
    (*a) ^= (*b);
    (*b) ^= (*a);
    (*a) ^= (*b);
}

int main(void)
{
    int x, y;
    scanf("%d%d", &x,&y);
    swap(&x, &y);
    printf("x=%d\ty=%d\n", x, y);
}
