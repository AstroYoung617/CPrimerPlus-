//7.7 ���㹤���ܶ˰��;�����

#include <stdio.h>
#define RATE_1 0.15
#define RATE_2 0.2
#define RATE_3 0.25
#define DPH 10.00

int main(void){
	int hour;
	float all,rate,gross;
	
	printf("�����뱾�ܹ�����Сʱ����");
	scanf("%d", &hour);
	if(hour > 40){
		all = 40*DPH+(hour-40)*1.5*DPH;
	}
	else
		all = hour*DPH;
	if(all<=300){
		rate = all*RATE_1;
	}
	else if(all>300&&all<=450){
		rate = 300*RATE_1 + (all-300)*RATE_2;
	}
	else
		rate = 300*RATE_1 + 150*RATE_2 + (all-450)*RATE_3;
	printf("������Ϊ��%.2f , ˰��Ϊ��%.2f, ������Ϊ��%.2f", all, rate, all-rate);
	return 0;
} 
