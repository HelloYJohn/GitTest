#include <sys/stat.h>
#include <sys/types.h>
#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[])
{
    const char *pathname="/home/John/Program/GitTest/Linux/a";

    if (mkdir(pathname, 0700) == -1) {
        perror("Couldn't create the directory");
        return 1;
    }
    
    return 0;
}
