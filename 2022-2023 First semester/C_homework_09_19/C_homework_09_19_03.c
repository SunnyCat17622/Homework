//5.11.3
#define _CRT_SECURE_NO_WARNINGS 1 //Disable the deprecation of the use of scnaf function
#include <stdio.h>
int main(void)
{
	int days;
	int c_weeks, c_days;
	printf("Please, enter the days to convert. The days are __\b\b");
	scanf("%d", &days);
	c_weeks = days / 7;
	c_days = days % 7;
	printf("%d days are %d weeks, %d days.\n", days, c_weeks, c_days);
	return 0;
}