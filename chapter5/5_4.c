// 5.4 �û��������CM���ֱ���Ӣ�ߺ�Ӣ��Ϊ��λ��ʾ��ֵ���ܹ��ظ�����ֱ��С�ڵ���0ֹͣ

#include <stdio.h>
#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54

int main(void){
	int feet;
	float inch, cm;
	
	printf("�������������cm��");
	scanf("%f", &cm);
	while(cm > 0){
		feet = cm/FEET_TO_CM;
		inch = (cm - feet*FEET_TO_CM)/INCH_TO_CM;
		printf(" %.1f cm = %d feet, %1.f inches\n", cm, feet, inch);
		printf("��������루��������<=0�����˳�����");
		scanf("%f", &cm); 
	} 
	
	return 0;
} 
