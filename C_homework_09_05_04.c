#include <stdio.h>
int main(void)
{
	//���ǵ� �� 21.48-32.98��Ԫ 1.94��
	//����H6 13.18-15.18��Ԫ 1.52��
	//BMW X5 60.5-77.5��Ԫ 2.24��
	float p_byd1 = 21.48; float p_byd2 = 32.98;//price ��ͼۺ���߼�
	float p_cc1 = 13.18;  float p_cc2 = 15.18;
	float p_bmw1 = 60.5;  float p_bmw2 = 77.5;
	float w_byd = 1.94;//weight
	float w_cc = 1.52;
	float w_bmw = 2.24;
	float pc_byd1,pc_cc1,pc_bmw1;//price conversion ��������ͼۺ���߼�
	float pc_byd2,pc_cc2,pc_bmw2;
	printf("���ǵϺ���ֵ%.2f-%.2f��Ԫ,��%.2f��\n",p_byd1,p_byd2,w_byd);
	printf("����H6��ֵ%.2f-%.2f��Ԫ,��%.2f��\n",p_cc1,p_cc2,w_cc);
	printf("BMW X5��ֵ%.2f-%.2f��Ԫ,��%.2f��\n",p_bmw1,p_bmw2,w_bmw);
	pc_byd1 = 21.48*10000/(1.94*1000*2);
	pc_byd2 = 32.98*10000/(1.94*1000*2);
	pc_cc1 = 13.18*10000/(1.52*1000*2);
	pc_cc2 = 15.18*10000/(1.52*1000*2);
	pc_bmw1 = 60.5*10000/(2.24*1000*2);
	pc_bmw2 = 77.5*10000/(2.24*1000*2);
	printf("����֮�󣺱��ǵϺ���ֵ%.2f-%.2f ��/Ԫ\n",pc_byd1,pc_byd2);
	printf("����֮�󣺳���H6��ֵ%.2f-%.2f ��/Ԫ\n",pc_cc1,pc_cc2);
	printf("����֮��BMW X5��ֵ%.2f-%.2f ��/Ԫ\n",pc_bmw1,pc_bmw2);
	return 0;
}