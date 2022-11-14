#define _CRT_SECURE_NO_WARNINGS_ 1
#include <stdio.h>
#define NOE 4
void at(int arr1[], int arr2[], int noe)
{
	int arr3[NOE];
	int num;
	for (num = 0; num <= noe - 1; num++)
	{
		printf("%-2d", arr3[num] = arr1[num] + arr2[num]);
	}
}
int main(void)
{
	int arr1[NOE], arr2[NOE], arr3[NOE];
	int num;
	printf("The first arry.\n");
	for (num = 0; num <= NOE - 1; num++)
		scanf("%d", &arr1[num]);
	printf("The second arry.\n");
	for (num = 0; num <= NOE - 1; num++)
		scanf("%d", &arr2[num]);
	at(arr1, arr2, NOE);
	return 0;
}