#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (symlink("symlink.cpp", "symlink.cpp.symlink") == -1) {
        perror("Cannot create symlink");
        return 1;
    }
    return 0;
}

