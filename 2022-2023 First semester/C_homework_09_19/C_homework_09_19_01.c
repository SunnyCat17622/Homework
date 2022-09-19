//5.11.1
#include <stdio.h>
#define SIXTY 60
int main(void)
{
	int min = 1;//time in min
	int t_h, t_min;//time in hour and min
	printf("This programe converts your time in mintues to hours and mintues.\n");
	printf("\nPlease, enter your time in minutes:__\b\b");
	scanf("%d", &min);
	while (min > 0)
	{
		t_h = min / SIXTY;//find whole hours
		t_min = min % SIXTY;//find remaining minutes
		printf("The time you have entered is %d minutes,\n", min);
		printf("which corresponds to %d hours and %d minutes.\n", t_h, t_min);
		printf("The program would not stop until you enter a number that less than or equal to 0.\n");
		printf("\nPlease, enter your time in minutes:__\b\b");
		scanf("%d", &min);
	}
	printf("\nThe program ends.\n");
	return 0;
}