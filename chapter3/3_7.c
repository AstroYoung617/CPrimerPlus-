//3_7 输入英寸以厘米显示身高

#include <stdio.h>
#define INCH_TO_CM 2.54 //用预编译指令定义一英寸等于多少厘米 

int main(void){
	float inch;
	
	printf("请输入您的身高（英寸）:");
	scanf("%f", &inch);
	printf("您的身高（厘米）：%f cm", inch*INCH_TO_CM);
	
	return 0;
} 
