//3_6 输入水的夸脱数， 显示水分子的数量

#include <stdio.h>
#define mole 3.0e-23
#define quart 950
int main(void){
	float quarts;
	printf("请输入夸脱数：");
	scanf("%d", &quarts);
	printf("所含水分子数：%e", quarts*quart/mole);
	return 0;
} 
