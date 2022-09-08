#include <stdio.h>
int main(void)
{
	//比亚迪 汉 21.48-32.98万元 1.94吨
	//长城H6 13.18-15.18万元 1.52吨
	//BMW X5 60.5-77.5万元 2.24吨
	float p_byd1 = 21.48; float p_byd2 = 32.98;//price 最低价和最高价
	float p_cc1 = 13.18;  float p_cc2 = 15.18;
	float p_bmw1 = 60.5;  float p_bmw2 = 77.5;
	float w_byd = 1.94;//weight
	float w_cc = 1.52;
	float w_bmw = 2.24;
	float pc_byd1,pc_cc1,pc_bmw1;//price conversion 换算后的最低价和最高价
	float pc_byd2,pc_cc2,pc_bmw2;
	printf("比亚迪汉价值%.2f-%.2f万元,重%.2f吨\n",p_byd1,p_byd2,w_byd);
	printf("长城H6价值%.2f-%.2f万元,重%.2f吨\n",p_cc1,p_cc2,w_cc);
	printf("BMW X5价值%.2f-%.2f万元,重%.2f吨\n",p_bmw1,p_bmw2,w_bmw);
	pc_byd1 = 21.48*10000/(1.94*1000*2);
	pc_byd2 = 32.98*10000/(1.94*1000*2);
	pc_cc1 = 13.18*10000/(1.52*1000*2);
	pc_cc2 = 15.18*10000/(1.52*1000*2);
	pc_bmw1 = 60.5*10000/(2.24*1000*2);
	pc_bmw2 = 77.5*10000/(2.24*1000*2);
	printf("换算之后：比亚迪汉价值%.2f-%.2f 斤/元\n",pc_byd1,pc_byd2);
	printf("换算之后：长城H6价值%.2f-%.2f 斤/元\n",pc_cc1,pc_cc2);
	printf("换算之后：BMW X5价值%.2f-%.2f 斤/元\n",pc_bmw1,pc_bmw2);
	return 0;
}