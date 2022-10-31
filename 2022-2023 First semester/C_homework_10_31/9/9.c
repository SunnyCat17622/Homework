#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int judge(int n)
{
	int j = 2;
	for (; j < n; j++)
		if (n % j == 0)
		{
			n = 0;
			break;
		}
	return n;
}
int main(void)
{
	int a = 100;
	int n = 1;
	printf("Enter a positive integer:");
	scanf("%d", &a);
	for (; n <= a; n++)
	{
		if (judge(n))
			printf("%d\n", n);
	}
	return 0;
}
