#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    DIR *dir;
    struct dirent *drt;

    dir = opendir("/etc/pcmcia");
    if (NULL == dir) {
        perror("Cannot open the desired directory");
        return 1;
    }
    while ((drt=readdir(dir)) != NULL) {
        printf("filename of directory : %s\n", drt->d_name);
    }
    closedir(dir);
    return 0;
}


