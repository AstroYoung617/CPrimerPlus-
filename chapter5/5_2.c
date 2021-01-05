//5.2 输入一个数打印比该数大10的所有整数

#include <stdio.h>

int main(void){
	int n;
	int i=0;
	printf("请输入一个整数：");
	scanf("%d", &n);
	
	while(i++<11){
		printf("%d	", n++);
	}
	return 0;
} 
