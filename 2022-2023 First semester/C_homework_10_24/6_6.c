//6_6
#include <stdio.h>
int main(void)
{
	int li = 0;//lower integer
	int ui = 1;//up integer
	printf("������������޺����ޣ�");
	scanf("%d %d",&li,&ui);
	for(;li <= ui;li++)
	{
		printf("���֣�%3d  ƽ����%3d  ������%3d\n",li,li*li,li*li*li);
	}
	getch();
	return 0;
}
