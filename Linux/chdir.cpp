#include <unistd.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long cur_path_len;
    char *cur_work_dir;

    if ((cur_path_len = pathconf(".", _PC_PATH_MAX)) == -1) {
        perror("Couldn't get current working path length");
        return 1;
    }

    std::cout << "Current Path Length Is " << cur_path_len << std::endl;

    if ((cur_work_dir = (char *)malloc(cur_path_len)) == NULL) {
        perror("Couldn't allocate memory for the pathname");
        return 1;
    }

    if (getcwd(cur_work_dir, cur_path_len) == NULL) {
        perror("Couldn't get current working directory");
        return 1;
    }

    std::cout << "Current Working Directory is" << cur_work_dir << std::endl;
    
    if (chdir("..") == -1) {
        perror("Couldn't change current working directory");
        return 1;
    }

    if (getcwd(cur_work_dir, cur_path_len) == NULL) {
        perror("Couldn't get current working directory");
        return 1;
    }

    std::cout << "After chdir, Current Working Directory is" << cur_work_dir << std::endl;

    return 0;
     
}
    

