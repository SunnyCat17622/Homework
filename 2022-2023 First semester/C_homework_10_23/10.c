#include <stdio.h>
int main(void)
{
	int li = 0;
	int ui = 1;
	int sum = 1;
	int n = 0;
	printf("Enter lower and upper integer limits:");
	scanf("%d %d",&li,&ui);
	while( li < ui)
	{
		n = li;
		sum = ui*ui;
		for(;n < ui;n++)
		{
			sum += n*n;
		}
		printf("The sum of the squares from %d to %d is %d\n",li,ui,sum);
		printf("Enter next set of limits:");
	    scanf("%d %d",&li,&ui);		
	}
	printf("Done.\n");
	return 0;
}