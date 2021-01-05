//5.3 用户输入天数转换为周数和天数

#include <stdio.h>

int main(void){
	const int W_TO_D = 7;
	int day,week;
	
	printf("请输入天数：");
	scanf("%d", &day);
	week = day / W_TO_D;
	day = day % W_TO_D;
	printf("转换为周数和天数应为：%d 周 %d 天", week, day);
	return 0;
} 
