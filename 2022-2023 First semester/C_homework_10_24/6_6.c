//6_6
#include <stdio.h>
int main(void)
{
	int li = 0;//lower integer
	int ui = 1;//up integer
	printf("请输入表格的下限和上限：");
	scanf("%d %d",&li,&ui);
	for(;li <= ui;li++)
	{
		printf("数字：%3d  平方：%3d  立方：%3d\n",li,li*li,li*li*li);
	}
	getch();
	return 0;
}
