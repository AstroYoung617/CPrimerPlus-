// 5.4 用户输入身高CM，分别以英尺和英寸为单位显示该值，能够重复输入直到小于等于0停止

#include <stdio.h>
#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54

int main(void){
	int feet;
	float inch, cm;
	
	printf("请输入您的身高cm：");
	scanf("%f", &cm);
	while(cm > 0){
		feet = cm/FEET_TO_CM;
		inch = (cm - feet*FEET_TO_CM)/INCH_TO_CM;
		printf(" %.1f cm = %d feet, %1.f inches\n", cm, feet, inch);
		printf("请继续输入（或者输入<=0的数退出）：");
		scanf("%f", &cm); 
	} 
	
	return 0;
} 
