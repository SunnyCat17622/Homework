#include <stdio.h>
int main(void)
{
	double sum_da = 100 ;
	double sum_de = 100;
	int y = 0;
	for(;sum_de <= sum_da;y++)
	{
		sum_da += 10;
		sum_de += sum_de*0.05;
	}
	printf("第%d年 Deirdre 的投资额超过 Daphne.\n",y);
	return 0;
}