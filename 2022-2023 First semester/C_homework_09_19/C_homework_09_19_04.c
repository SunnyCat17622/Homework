//5.11.4
#include <stdio.h>
int main(void)
{
	float h_cm, h_ic;//height in cm and inches
	float t_h_ic;//cm converts to inches completely
	int h_f;//height in feet
	printf("Please, enter a height in centimeters: _\b");
	scanf("%f", &h_cm);
	while (h_cm > 0)
	{
		t_h_ic = (float)h_cm / (float)2.54;//cm converts to inches completely
		h_f = (int)t_h_ic / 12;//inches converts to feet
		h_ic = ((float)t_h_ic / (float)12.0 - h_f) * (float)12.0;//remaining height in inches
		printf("\n%.1f cm = %d feet, %.1f inches.\n", h_cm, h_f, h_ic);
		printf("\nPlease, enter a height in centimeters(<= 0 to quit): _\b");
		scanf("%f", &h_cm);
	}
	printf("\nThe program ends.\n");
	return 0;
}