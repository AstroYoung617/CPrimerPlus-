//6.9 �޸�6.8ʹ��һ���������ؽ��

#include <stdio.h>
float count(float n, float m);
	
int main(void){
	float a,b;
	printf("������������������");
	while(scanf("%f %f", &a, &b)==2){
		printf("���Ϊ��%f", count(a,b
		));
	}
	
	return 0;
} 

float count(float n, float m){
	return (n-m)/(n*m);
} 
