// 5.7 ����һ��double���͵�������ӡ���������������һ��������ӡ������main���û������ֵ��������

#include <stdio.h>
double cube(double d);

int main(void){
	double n;
	
	printf("������һ������");
	scanf("%lf", &n);
	cube(n);
	return 0;
} 

double cube(double d){
	d = d * d * d;
	printf("����������Ϊ%.3lf", d);
	return 0;
}
