#include <stdio.h>

int main(int argc, char *argv[])
{
  struct foo {
    struct baz {
      int i;
    };
    foo * a;
    enum color {RED, BLUE};
  };

  struct baz b;
  enum color x = RED;
  b.i = 1;

  printf("baz b is :%d", b.i);
  printf("enum color x is : %d", x);
  return 0;
}
