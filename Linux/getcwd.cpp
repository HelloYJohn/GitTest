#include <limits.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#ifndef PATH_MAX
#define PATH_MAX 255
#endif

int main(int argc, char *argv[])
{
  char cur_work_dir[PATH_MAX];

  std::cout << "Current Max Path Length Is " << PATH_MAX << std::endl;

  if (getcwd(cur_work_dir, PATH_MAX) == NULL) {
    perror("Couldn't get current working directory!");
    return 1;
  }

  std::cout << "Current Work Directory is :" << cur_work_dir << std::endl;
  return 0;
}

