#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void P(char c, int n, int l);
int main(void)
{
	char c;
	int n, l;
	scanf("%c %d %d", &c, &n, &l);
	P(c, n, l);
	return 0;
}
void P(char c, int n, int l)
{
	int i,m;
	for (i = 1; i <= l; i++)
	{
		for (m = 1; m <= n; m++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}