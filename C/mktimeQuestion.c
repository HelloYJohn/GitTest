#include <time.h>
#include <stdint.h>
#include <stdio.h>

int main()
{
	struct tm dt_time, dt_time2;
	int64_t Msecond1, Msecond2;
	dt_time.tm_sec = 0;
	dt_time.tm_min = 0;
	dt_time.tm_hour = 0;
	dt_time.tm_mday = 1;
	dt_time.tm_mon = 0;     // Month [0-11]
	dt_time.tm_year = 21;
	dt_time2.tm_sec = 0;
	dt_time2.tm_min = 0;
	dt_time2.tm_hour = 0;
	dt_time2.tm_mday = 1;
	dt_time2.tm_mon = 0;     // Month [0-11]
	dt_time2.tm_year = 21;
	Msecond1 = mktime(&dt_time);
	Msecond2 = mktime(&dt_time2);

	printf("1:%ld\n2:%ld\n", Msecond1*1000, Msecond2*1000);
	return 0;
}

