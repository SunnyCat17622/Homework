#include <stdio.h>
int main(void)
{
	float p = 1;
	float n = 1;
	float m;
	float z = 1;
	int c = 1;
	while (c<100000000)
	{
		n = n + 2;
		z = -z;
		m = (1 / n) * z;
		p = p + m;
		c++;
	}
	printf("¦Ð = %.6f",p*4);
	getchar();
	return 0;
}