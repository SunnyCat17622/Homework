#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if(isal(ch) == 1)
			printf("%d\n", ch - 96);
		if(isal(ch)==2)
			printf("%d\n", ch - 64);
		if(add(ch)!=-1)
			printf("%x\n",add(ch));
		else
			printf("%d\n", add(ch));
	}
	return 0;
}
int isal(char ch)//is a letter
{
	if (ch >= 'a' && ch <= 'z')
		return 1;
	if (ch >= 'A' && ch <= 'Z')
		return 2;
	return 0;
}
int add(char ch)
{
	if (isal(ch))
		return &ch;
	else
		return -1;
}