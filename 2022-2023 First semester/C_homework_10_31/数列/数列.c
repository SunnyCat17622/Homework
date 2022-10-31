#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	float mol = 1;//molecule
	float den = 2;//denominator
	int c = 0;//circle
	float sum = 0;
	float mv = 0;//median value
	for (; c <= 20; c++)
	{
		sum += mol / den;
		mv = mol;
		mol = den;
		den = mv + den;
	}
	printf("%.3f", sum);
	return 0;
}
