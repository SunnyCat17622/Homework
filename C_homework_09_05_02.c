#include <stdio.h>
#include <float.h>
int main(void)
{
	double d = 1.0/3.0;
	float f = 1.0/3.0;
	printf("double type, six decimal places:%.6f\n",d);
	printf("double type, twelve decimal places:%.12f\n",d);
	printf("double type, sixteen decimal places:%.16f\n",d);
	printf("float type, six decimal places:%.6f\n",f);
	printf("float type, twelve decimal places:%.12f\n",f);
	printf("float type, sixteen decimal places:%.16f\n",f);
	printf("double precision = %d digits\n", DBL_DIG);
	printf("float precision = %f digits\n", FLT_DIG);
	printf("1.0/3.0和这些值的结果不一致\n");
	return 0;
}

