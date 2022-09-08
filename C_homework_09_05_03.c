#include <stdio.h>
#include <math.h>
int main(void)
{
	float a,b,c;//the 3 sides of a triangle
	float p,area;//half of the circumference and area of a triangle
	printf("Enter the lengths of the 3 siades of the triangle you want to calculate the area of separated by spaces, plase.\n");
	scanf("%f %f %f",&a,&b,&c);
	p = (a + b + c)/2;
	area = sqrt(p*(p - a) * (p - b) * (p - c));//Heron's formula
	printf("The area of the triangle is %.2f\n",area);
	return 0;
}