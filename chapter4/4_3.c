//4_3 读取一个浮点数，小数点计数法打印和指数计数法打印

#include <stdio.h>

int main(void){
	float input;
	
	printf("请输入一个浮点数：");
	scanf("%f", &input);
	printf("%.1f,  %.1e\n", input, input);
	printf("%f,  %e", input, input);
	return 0;
} 
