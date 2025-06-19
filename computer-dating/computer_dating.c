/*
The question is: When will the time_t's wrap around?
time_t is a data type using in C to represent time.

- the 
*/
#include <stdio.h>
#include <time.h>
#include <limits.h>

int main()
{
	time_t max_time_32;

	//the max value that a time_t variable can store on a 32-bit 
	//system 1ULL is a unsigned long long int with the value of 1
	//by shifting the '1' 31 squares to the left, 
	max_time_32 = (time_t)((1ULL << 31) - 1);

	//initialize a time_t variable named now
	//and then call the time() function to set
	// it's value to now's time
	time_t now;
	time(&now);
	printf("now: %s\n", ctime(&now));
	printf("biggest possible value for 32-bit %s\n", ctime(&max_time_32));

}
