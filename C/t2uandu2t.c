#include <stdio.h>

int main()
{
  char t = 0xff;
  unsigned char ut = 0xff;
  int it = ut;
  printf("t=%d\tut=%u\n", t, ut);
  printf("t2u=%u\tu2t=%d\n", (unsigned char)t, (char)ut);
  printf("unsigned char 2 int= %d",it);
  return 0;
}
