//7_1
#include <stdio.h>
int main(void)
{
	int nc = 0;//number of circles
	char c = '0';
	for(;c != '#';nc++)
		c = getchar();
	printf("%d",nc);
	getch();
	return 0;
}