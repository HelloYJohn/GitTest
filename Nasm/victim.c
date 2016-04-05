#include <stdio.h>
#include <unistd.h>

void borrowed() {
    execl("/bin/sh", NULL, NULL);
}

int main() {
    char name[64];
    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}