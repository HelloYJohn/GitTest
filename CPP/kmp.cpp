#include <iostream>
#include <string.h>

void getNext(const char *pattern, int len, int next[]) {
    next[1] = -1;
    next[2] = 0;
    int i, j;
    for (i = 3; i <= len; i++) {
        j = next[i-1] + 1;
        while (pattern[i-1] != pattern[j] && j > 0) {
            j = next[j] + 1;
        }
        next[i] = j;
    }
}

int main(int argc, char *argv[])
{
    int len = strlen(argv[1]);
    int next[len];
    int i;
    getNext(argv[1], len, next);
    for (i = 1; i <= len; i++) {
        std::cout << "next[" << i << "] = " << next[i] << std::endl;
    }

    return 0;
}

