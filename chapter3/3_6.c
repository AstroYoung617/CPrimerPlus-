//3_6 ����ˮ�Ŀ������� ��ʾˮ���ӵ�����

#include <stdio.h>
#define mole 3.0e-23
#define quart 950
int main(void){
	float quarts;
	printf("�������������");
	scanf("%d", &quarts);
	printf("����ˮ��������%e", quarts*quart/mole);
	return 0;
} 
