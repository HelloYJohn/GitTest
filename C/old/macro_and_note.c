#include <stdio.h>
#include <wchar.h>

#define fun() \
do{ \
    /*  abc */             \
    int i = 1; \
  } while(0);
int main()
{
    fun();
    return 0;
}
 
