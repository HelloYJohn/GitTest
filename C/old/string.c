#include <stdio.h>
#include <string.h>

int main()
{
  char *t = "\x80@ \x10\x08\x04\x02\x01";
  printf("%s\n", t);
  printf("%d\n", strlen(t));
  return 0;
}
include <stdlib.h>
