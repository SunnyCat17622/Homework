#include <stdio.h>
//Number of element
#define NOE 8
void Print(int arr[],int noe)
{
	int i;
	for(i = 0;i < noe;i++)
		printf("%-4d",arr[i]);
	printf("\n");
}
void Sort(int arr[],int noe)
{
	int k,m;
	for(noe = 0;noe < NOE;noe++)
	{
		for(k = noe +1;k < NOE;k++) 
		{
			if(arr[k] < arr[noe])
			{
				m = arr[noe];
				arr[noe] = arr[k];
				arr[k] = m;
			}
		}
	}
}
int main(void)
{
	int arr[NOE] = {1,5,8,13,34,87,99};
	//只需要打印前七个元素
	Print(arr,NOE - 1);
	scanf("%d",&arr[sizeof(arr)/sizeof(arr[0])-1]);
	Sort(arr,NOE);
	Print(arr,NOE);
	return 0;
}