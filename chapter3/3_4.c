//3_4 编写程序，读取浮点数，先打印小数，在打印指数，在打印p计数法。

#include <stdio.h>

int main(void){
	float input;
	
	printf("输入一个浮点型变量：");
	scanf("%f", &input);
	printf("小数：%f\n", input);
	printf("指数：%e\n", input);
	printf("p记数法：%a\n", input);
	return 0;
} 
