//6.8  打印两数之差除以两数乘积的结果 

#include <stdio.h>

int main(void){
	float a,b;
	printf("请输入两个浮点数：");
	while(scanf("%f %f", &a, &b)==2){
		printf("结果为：%f", (a-b)/(a*b));
	}
	
	return 0;
}
