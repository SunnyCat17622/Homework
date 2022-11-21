#include <stdio.h>
#define ROW 3
#define COL 5
//calculate average
void calaver(double arr[ROW][COL],int row,int col)
{
	//sum of row
	double sor;
	for(row= 0,sor = 0;row<ROW;row++)
	{
		for(col =0;col<COL;col++)
		{
			sor += arr[row][col];
		}
		printf("%9.2lf",sor/(col+1));
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
	calaver(arr,ROW,COL);
	return 0;
}