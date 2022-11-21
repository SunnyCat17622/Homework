#include <stdio.h>
#define ROW 3
#define COL 5
//初始化数组
void initarr(int arr[][COL],int row,int col)
{
	int i;
	for(row = 0,i=1;row < ROW;row++)
	{
		for(col = 0;col<COL;col++,i++)
			arr[row][col] = i;
	}
}
//打印数组
void printarr(int arr[][COL],int row)
{
	int col;
	for(row = 0;row<ROW;row++)
	{
		for(col = 0;col<COL;col++)
			printf("%-4d",arr[row][col]);
		printf("\n");
	}
	printf("\n");
}
//翻倍每个元素
void doubleelement(int arr[][COL],int row)
{
	int col;
	for(row =0;row<ROW;row++)
	{
		for(col = 0;col<COL;col++)
			arr[row][col] *= arr[row][col];
	}

}
int main(void)
{
	int arr[ROW][COL];
	//初始化数组
	initarr(arr,ROW,COL);
	//打印原数组
	printarr(arr,ROW);
	//翻倍每个元素
	doubleelement(arr,ROW);
	//打印翻倍后的数组
	printarr(arr,ROW);
	return 0;
}