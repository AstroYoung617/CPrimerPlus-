//5.1 把分钟转换成用小时和分钟表示。输入小于零停止程序 

#include <stdio.h> 
#define M_PER_H 60 //1 hour = 60 minutes 

int main(void){
	int min;
	int hour;
	
	printf("请输入分钟数（或输入<=0的数来停止）：");
	scanf("%d", &min);
	while(min>0){
		hour = min / M_PER_H;
		min = min % M_PER_H; 
		printf("转换为分钟小时表示为：%d小时 %d分钟\n请继续输入（或输入<=0的数来停止）：",
		 hour, min);
		scanf("%d", &min);
	}
	return 0;
}
