#include <stdio.h>
#define ROW 3
#define COL 5
//��ʼ������
void initarr(int arr[][COL],int row,int col)
{
	int i;
	for(row = 0,i=1;row < ROW;row++)
	{
		for(col = 0;col<COL;col++,i++)
			arr[row][col] = i;
	}
}
//��ӡ����
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
//����ÿ��Ԫ��
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
	//��ʼ������
	initarr(arr,ROW,COL);
	//��ӡԭ����
	printarr(arr,ROW);
	//����ÿ��Ԫ��
	doubleelement(arr,ROW);
	//��ӡ�����������
	printarr(arr,ROW);
	return 0;
}