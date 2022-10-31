#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int judge(float s)
{
	int Le = 1;
	if (s > 60)
		Le = 2;
	if (s > 70)
		Le = 3;
	if (s > 80)
		Le = 4;
	if (s > 90)
		Le = 5;
	return Le;
}
int main(void)
{
	float s = 0;
	int Le = 1;
	scanf("%f", &s);
	switch (Le = judge(s))
		{
		case 1:
			printf("E\n");
			break;
		case 2:
			printf("D\n");
			break;
		case 3:
			printf("C\n");
			break;
		case 4:
			printf("B\n");
			break;
		case 5:
			printf("A\n");
			break;
		}
	return 0;
}
