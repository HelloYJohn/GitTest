#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *c1 = "abc";
    char *c2 = "abcd";
    int cmp = strcmp(c1, c2);
    printf("cmp = %d\n", cmp);
    return 0;
}
