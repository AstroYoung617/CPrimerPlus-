//6.11 编写一个程序在数组中读入8个整数，然后倒序打印这8个整数

#include <stdio.h>

int main(void){
	int num[8];
	int i,j;
	
	printf("请输入8个整数:");
	for(i=0;i<8;i++){
		scanf("%d", &num[i]);
	}
	printf("其倒序为：");
	for(j=7;j>=0;j--){
		printf(" %d", num[j]);
	} 
	return 0;
} 
