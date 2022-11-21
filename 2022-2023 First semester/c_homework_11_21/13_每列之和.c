#include <stdio.h>
#define ROW 3
#define COL 5
//calculate sum
void calsum(double arr[ROW][COL],int row,int col)
{
	//sum of col
	double soc;
	for(col =0;col<COL;col++)
	{
		for(row= 0,soc = 0;row<ROW;row++)
		{
			soc += arr[row][col];
		}
		printf("%-6.1lf",soc);
	}

}
int main(void)
{
	double arr[ROW][COL];
	double i;
	int row,col;
	for(row =0,i = 1.1;row<ROW;row++)
	{
		for(col =0;col<COL;col++,i++)
			scanf("%lf",&arr[row][col]);
	}
	calsum(arr,ROW,COL);
	return 0;
}