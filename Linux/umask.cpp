#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int fd1, fd2;

    fd1 = open("test", O_CREAT | O_RDWR, 0777);
    if (fd1 < 0) {
        perror("Cannot create the test file");
        return 1;
    }
    close(fd1);
    struct stat file_stat;

    if (stat("test", &file_stat) == -1) {
        perror("Cannot get the information of the file!\n");
        return 1;
    }

    printf("Premission is : %o\n", file_stat.st_mode && 0x1ff);

    umask(S_IWGRP | S_IRGRP | S_IXGRP | S_IROTH | S_IWOTH | S_IXOTH);

    fd2 = open("test1", O_CREAT | O_RDWR, 0777);

    if (fd2 < 0) {
        perror("Cannot create the test file");
        return 1;
    }


    close(fd2);
    if (stat("test1", &file_stat) == -1) {
        perror("Cannot get the information of the file!\n");
        return 1;
    }

    printf("After Modify umask value, Permission is :%o\n", file_stat.st_mode & 0x1ff);
    
    return 0;
}

