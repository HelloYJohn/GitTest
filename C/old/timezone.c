#include <time.h> 
#include <stdlib.h>
#include <stdio.h> 
int main(int argc, char** argv) 
{
	struct tm t;
	time_t t_of_day;
	if( putenv( "TZ=GMT" ) == -1 )
	{
		printf( "Unable to set TZ/n" );exit( 1 );
	}
	tzset();
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
	printf( "daylight = %d\n", daylight ); 
	printf( "timezone = %ld\n", timezone ); 
	printf( "tzname[0] = %s\n", tzname[0] );

	return 0;
}
