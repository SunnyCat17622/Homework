//6_5
#include <stdio.h>;
int main(void)
{
	int L = 0;//Line
	char ch = 'A';//用户输入的字母
	char q = 'A';//打印前半段的字母
	char h = 'A';//打印后半段的字母
	char space = ' ';//空格
	char n_s = 'A';//number of space
	printf("请输入一个大写字母:");
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