#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	unsigned long time_1 = 18446744073709551615;
	unsigned long time_out = time_1 + 50;
	printf("%d\n", (long)time_out	- (long)time_1);
	printf("%lu\n", time_1);
	return 0;
}
