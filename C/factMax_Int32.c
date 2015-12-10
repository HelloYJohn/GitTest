#include <stdio.h>

int main()
{
    int n = 2;
    int result = 1, temp = 0;
    
    while(1)
    {
      temp = result;
	  result = result * n;
	  printf("result: %d\n", result);
      if(result < 0)
      {
		  break;
      }
      n++;
    }
	printf("%d\n", n-1);
    
	return 0;
}
