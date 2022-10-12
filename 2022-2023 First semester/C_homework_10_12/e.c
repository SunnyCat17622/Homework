#include <stdio.h>
int main(void)
{
	float e= 1;
	float p = 1;
	float n = 2;
	float m = 1;
	while( n <= 100)
	{
		e = e + p;
		m = m*n;
		p= 1/m;
		n++;
	}
	printf("e = %.6f\n",e);
	getchar();
	return 0;
}