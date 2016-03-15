#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if (link("link.cpp", "link.cpp.hardlink") == -1) {
        perror("Cannot create the hard link");
        return 1;
    }
    return 0;
}

