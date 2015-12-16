#include <stdio.h>

struct struct_1
{
    char char_1;
    long double a[100];

};
int main()
{
    printf("%d\n", sizeof(struct struct_1));
    return 0;
}

