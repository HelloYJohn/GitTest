#include <stdio.h>
#include <stdlib.h>

void f();

int main(int argc, char *argv[])
{
  f();
  return 0;
}

void f()
{
  int *a = (int*)malloc(sizeof(int) * 10);
  a[10] = 0;
}

