#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	struct tm t;
	time_t t_of_day;
	t.tm_year = atoi(argv[1]) - 1900;
	t.tm_mon = atoi(argv[2]) - 1;
	t.tm_mday = atoi(argv[3]);
	t.tm_hour = atoi(argv[4]);
	t.tm_min = atoi(argv[5]);
	t.tm_sec = atoi(argv[6]);
	t.tm_isdst = 0;
	t_of_day = mktime(&t);
	printf("%ld\n", t_of_day);
	printf(ctime(&t_of_day));
	return 0;
}
