#include <stdio.h>
#define NOW 10
#define SPACE  
int main(void)
{
	int arr[NOW][NOW] = {{1},{1,1}};
	int h,l,num;
	char space = ' ';
	for(h = 2;h <= NOW - 1;h++)
	{
		arr[h][0] = 1;
		arr[h][h] = 1;
		for(l=1;l<=h;l++)
		arr[h][l] = arr[h-1][l-1]+arr[h-1][l];
	}
	for(h = 0;h <=NOW-1;h++)
	{
		for (num = 1; num < 3 * NOW - 3 * h; num++)
			printf("%c", space);
		for(l = 0;l<= h;l++)
			printf("%-6d",arr[h][l]);
		printf("\n");
	}
	return 0;
}