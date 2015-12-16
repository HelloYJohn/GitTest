#include <stdio.h>

typedef unsigned char byte;
void print_byte(byte* num, int len)
{
	int i;
	for(i = 0; i < len; i++)
	{
		printf("%.2X ", num[i]);
	}
	printf("\n");
}

int main()
{
	char c1 = 1;
	char c2 = -100;
	unsigned u1 = c1;
	unsigned u2 = c2;
	unsigned short s = 12345;
	int us = s;
	printf("c1: %d\t",c1);
	print_byte((byte*)&c1, sizeof(c1));
	printf("c2: %d\t",c2);
	print_byte((byte*)&c2, sizeof(c2));
	printf("u1: %u\t",u1);
	print_byte((byte*)&u1, sizeof(u1));
	printf("u2: %u\t",u2);
	print_byte((byte*)&u2, sizeof(u2));
	printf("s: %u\t", s);
	print_byte((byte*)&s, sizeof(s));
	printf("us: %d\t", us);
	print_byte((byte*)&us, sizeof(us));
	return 0;
}
