//¡¶C Prime Plus¡·p115/6
#include <stdio.h>
int main(void)
{
	int sum = 0;//sum of wages
	int count = 1;
	int sd = 1;//salary per day
	int days = 0;
	printf("Please, enter the days you worked :_\b");
	scanf("%d",&days);
	while(count++ <= days)
	{
		sum = sum +  sd;
		sd = count*count;
	}
	printf("The sum of your wages in %d days is : $%d\n",days,sum);
	return 0;
}