#include <stdio.h>
int main(void)
{
	int tt = 1;//type of tax
	double sa = 0;//salary
	double tax = 0;//tax
	float d = 0;
		printf("��ѡ������˰����� ����:1 ������:2 ���ѻ飬����:3 ���ѻ飬����:4 ; ����");
		scanf("%d",&tt);
	while(tt > 0)
	{
		printf("���������Ĺ��ʣ�");
		scanf("%Lf",&sa);
		switch(tt)
		{	
			case 1: 
					d = 17850;
					break;
			case 2:
					d = 23900;
					break;
			case 3:
					d = 29750;
					break;
			case 4:
					d = 14875;
					break;
		}
	
		if(sa <= d)
			tax = sa*0.15;
		else
			tax = d*0.15 + (sa - d)*0.28;
		printf("����Ҫ���ɵ�˰���ǣ�%.3Lf\n",tax);
		printf("��ѡ������˰����� ����:1 ������:2 ���ѻ飬����:3 ���ѻ飬����:4 ; <= 0 to quit����");
		scanf("%d",&tt);
	}
	printf("Done.\n");
	return 0;
}