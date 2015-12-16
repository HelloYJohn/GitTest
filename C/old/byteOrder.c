#include <stdio.h>

int main()
{
	unsigned int x = 0xFFFFFF61;
	unsigned int *ip = &x;
	char *cp = (char *)ip;
	printf("int_addr: %p\n", ip);
	printf("char_addr: %p\n", cp);
	printf("char_val: %d\n", *cp);
	return 0;
}

