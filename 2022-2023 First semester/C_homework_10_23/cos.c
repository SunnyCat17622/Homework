#include <stdio.h>
#include <math.h>
int main(void)
{
	float x =0;
	float p = -1;
	float n = 0;
	float c = 1;
	float d = 1;
	scanf("%f",&x);
	d = x;
	while( fabs(d) > 1e-6 )
	{
		n += 2;
		d = d*x*x/n/(n-1);
		c += d*p;
		p = - p;
	}
	printf("cos( %f ) = %.6f\n",x,c);
	return 0;
}