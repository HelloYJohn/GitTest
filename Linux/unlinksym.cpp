#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (unlink("symlink.cpp.symlink") == -1) {
        perror("Cannot delete symlink");
        return 1;
    }
    return 0;
}

