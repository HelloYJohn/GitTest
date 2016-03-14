#include <unistd.h>
#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[])
{
    const char *pathname = "/home/John/Program/GitTest/Linux/a";
    if (rmdir(pathname) == -1) {
        perror("Couldn't remove directory");
        return 1
    }
    
    return 0;
}
