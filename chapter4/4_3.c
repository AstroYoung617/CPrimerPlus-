//4_3 ��ȡһ����������С�����������ӡ��ָ����������ӡ

#include <stdio.h>

int main(void){
	float input;
	
	printf("������һ����������");
	scanf("%f", &input);
	printf("%.1f,  %.1e\n", input, input);
	printf("%f,  %e", input, input);
	return 0;
} 
