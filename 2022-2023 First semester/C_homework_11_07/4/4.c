#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double Hoa(double m, double n);
int main(void)
{
	double m, n;
	scanf("%lf %lf", &m, &n);
	printf("%.3lf", Hoa(m, n));
	return 0;
}
double Hoa(double m, double n)
{
	double oc;
	oc = 1 / (1 / m + 1 / n);
	return oc;
}