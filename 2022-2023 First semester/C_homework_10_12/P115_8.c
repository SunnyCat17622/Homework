//¡¶C Primer Plus¡·P115_8
#include <stdio.h>
int main(void)
{
	int fo = 1;//First operand
	int so = 1;//Second operand
	printf("This program computes moduli.\n");
	printf("Enter an ineger to serve as the second operand:___\b\b\b");
	scanf("%d",&so);
	printf("Now enter the first operand: ___\b\b\b");
		scanf("%d",&fo);
	while(fo > 0)
	{
		printf("%d %% %d is %d\n",fo,so,fo%so);
		printf("Enter next number for first operand(<= 0 to quit):___\b\b\b");
		scanf("%d",&fo);
	}
	printf("Done\n");
	return 0;
}