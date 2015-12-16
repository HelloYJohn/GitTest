#include <stdio.h>

int main()
{
  char wolf[] = "Like a wolf";
  char *p = &wolf[1];
  unsigned long l = *(unsigned long *)p;
  unsigned long ul = 0xff13ffff;
  printf("%lu\n%x\n%g",l, l,l);
  printf("\n%x",ul);
  return 0;
}
