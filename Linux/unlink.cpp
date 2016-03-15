#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (unlink("link.cpp.hardlink") == -1) {
        perror("Cannot delete the hard link");
        return 1;
    }
    return 0;
}

