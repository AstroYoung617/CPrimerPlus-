//4_8 ����������̺����ĵ�����������������ÿ����������ʻ��Ӣ����

#include <stdio.h>
#define GALLON_TO_LITER 3.785
#define MILE_TO_KM 1.609

int main(void){
	float mile,petrol;
	printf("������Ӣ������");
	scanf("%f", &mile);
	printf("�������������");
	scanf("%f", &petrol);
	printf("��������ĺ�����Ϊ��%.1f M/G\n", mile/petrol);
	printf("��ŷ����ĺ�����Ϊ��%.1f L/100KM", (petrol*GALLON_TO_LITER)/(mile*MILE_TO_KM));
	return 0;
} 
