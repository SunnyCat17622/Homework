//5.11.2
#include <stdio.h>
int main(void)
{
	int integer, s_integer;
	printf("Please, enter a integer:_\b");
	scanf("%d", &integer);
	s_integer = integer;
	while (integer <= s_integer + 10)
	{
		printf("%d\n", integer);
		integer++;
	}
	return 0;
}