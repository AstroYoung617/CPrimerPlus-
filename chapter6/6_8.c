//6.8  ��ӡ����֮����������˻��Ľ�� 

#include <stdio.h>

int main(void){
	float a,b;
	printf("������������������");
	while(scanf("%f %f", &a, &b)==2){
		printf("���Ϊ��%f", (a-b)/(a*b));
	}
	
	return 0;
}
