#include <cstdio>
#include <cstdlib>

int main()
{
	int i = 1, j;
	memcpy(&j, &i, sizeof(i));
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	return 0;
}
