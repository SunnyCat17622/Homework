#include <stdio.h>
int main()
{
	float ds = 0;//download speed
	float fs = 0;//file size
	float t = 0;//time
	printf("Enter the download speed and the file size of your file in magebits per second and magebytes,separated by spaces, plese.\n");
	scanf("%f %f",&ds,&fs);
	 t = fs*8.00/ds;
	printf("At %.2f magebits per second, a file of %.2f magebytes download in %.2f seconds.\n",ds,fs,t);
	getchar();
	return 0;
}