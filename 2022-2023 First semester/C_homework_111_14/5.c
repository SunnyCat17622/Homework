#define _CRT_SECURE_NO_WARNINGS_ 1
#include <stdio.h>
#define NOE 4
double cz(double arr[])
{
	int num = 0;
	int min,max;
	for (min = 0,max = 0; num <= NOE - 1; num++)
	{
		if (arr[min] > arr[num])
			min = num;
		if (arr[max] < arr[num])
			max = num;
	}
	return arr[max] - arr[min];
}
int main(void)
{
	double arr[NOE];
	int num;
	for(num = 0;num<= NOE - 1;num++)
		scanf("%lf",&arr[num]);
	printf("%.3lf\n",cz(arr));
	return 0;
}