//5.3 �û���������ת��Ϊ����������

#include <stdio.h>

int main(void){
	const int W_TO_D = 7;
	int day,week;
	
	printf("������������");
	scanf("%d", &day);
	week = day / W_TO_D;
	day = day % W_TO_D;
	printf("ת��Ϊ����������ӦΪ��%d �� %d ��", week, day);
	return 0;
} 
