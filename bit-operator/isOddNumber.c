#include <stdio.h>

int isOddNumber(int n)
{
    return (n & 1) == 1;
}

int main()
{
    printf("19999 is %s\n", isOddNumber(19999) ? "odd" : "even");
    return 0;
}
