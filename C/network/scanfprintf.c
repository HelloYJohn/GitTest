#include <stdio.h>

int main(int argc, char *argv[])
{
  int a;
  char str[20] = { 0 };
  scanf("%d", &a);
  sprintf(str, "%*d", a, 123456789);
  printf("%s", str);
  return 0;
}
