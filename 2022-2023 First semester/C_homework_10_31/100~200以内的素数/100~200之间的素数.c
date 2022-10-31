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
	int n = 100;
	for (; n <= 200; n++)
	{
		if (judge(n))
			printf("%d\n", n);
	}
	return 0;
}
