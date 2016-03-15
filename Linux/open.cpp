#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int fd;
    if (-1 == (fd=open("test", O_CREAT | O_RDWR, 0777))) {
        perror("Cannot create test file");
        return 1;
    }
    close(fd);
    return 0;
}




