//6_5
#include <stdio.h>;
int main(void)
{
	int L = 0;//Line
	char ch = 'A';//�û��������ĸ
	char q = 'A';//��ӡǰ��ε���ĸ
	char h = 'A';//��ӡ���ε���ĸ
	char space = ' ';//�ո�
	char n_s = 'A';//number of space
	printf("������һ����д��ĸ:");
	scanf("%c",&ch);
	for(L = 'A'; L <= ch; L++)
	{
		for(n_s = L;n_s < ch; n_s++)
			printf("%c",space);
		for(q = 'A'; q <= L;q++)
			printf("%c",q);
		for(h = q - 2; h >= 'A';h--)
			printf("%c",h);
		printf("\n");
	}
	getch();
	return 0;
}