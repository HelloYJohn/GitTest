#include <stdio.h>
#include <time.h>

int main()
{
	time_t timep;
	struct tm* p;
	time(&timep);
	printf("time():%d\n", timep);
	p = localtime(&timep);
	timep = mktime(p);
	printf("timm()->localtime()->mktime():%d\n", timep);
	return 0;
}
