#include <iostream>
#include <string.h>

void getNext(const char *pattern, int len, int next[]) {
    int i = 2, j;
    next[0] = -1;
    next[1] = 0;
    for (i = 2; i < len; i++) {
        j = next[i-1] + 1;
        while (pattern[i-1] != pattern[j-1] && j > 0) {
            j = next[j];
        }
        next[i] = j;
    }

}
int searchString(const char *str, int strLen, const char *pattern, int patternLen, int next[]) {
    int i = 0, j = 0;
    for (i = 0; i < strLen && j < patternLen; i++) {
        if (str[i] == pattern[j]) {
            j++;
        } else {
            j = j - next[j];
        }
    }
    if (j == patternLen) {
        return i;
    }
    return -1;
}

int main(int argc, char *argv[])
{
    const int len = strlen(argv[1]);
    int next[len];
    getNext(argv[1], len, next);
    for (int i = 0; i < len; i++) {
        std::cout << "next[" << i << "]" << " = " << next[i] << std::endl;
    }

    return 0;
}


