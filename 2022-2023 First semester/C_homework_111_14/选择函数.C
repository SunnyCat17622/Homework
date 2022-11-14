#include <stdio.h>
#define NOE 8//number of element
void Xzpx(int arr[],int noe)
{
	int n,i,k,t;
	for(k = 0; k < noe-1;k++)
	{
		for(n = k,i = n+1;i< noe -1;i++)
		{
			if(arr[n] > arr[i])
				n = i;
		}
		if(arr[k] != arr[n])
		{
			t = arr[k];
			arr[k] = arr[n];
			arr[n] = t;
		}
	}
}
int main(void)
{
	int arr[NOE];
	int num;
	for(num = 0;num < NOE-1;num++)
		scanf("%d",&arr[num]);
	Xzpx(arr,NOE);
		for(num = 0;num<NOE-1;num++)
		{
			printf("%4d",arr[num]);
		}
	getch();
	return 0;
}