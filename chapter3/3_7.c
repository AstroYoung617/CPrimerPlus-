//3_7 ����Ӣ����������ʾ���

#include <stdio.h>
#define INCH_TO_CM 2.54 //��Ԥ����ָ���һӢ����ڶ������� 

int main(void){
	float inch;
	
	printf("������������ߣ�Ӣ�磩:");
	scanf("%f", &inch);
	printf("������ߣ����ף���%f cm", inch*INCH_TO_CM);
	
	return 0;
} 
