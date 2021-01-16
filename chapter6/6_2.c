// 6.2 使用嵌套循环打印字符
/*
$
$$
$$$
$$$$
$$$$$
*/ 

#include <stdio.h>

int main(void){
	int i,j;
	
	for(i = 0; i<5; i++){
		for(j = 0; j<i + 1; j++){
			printf("$"); 
		}
		printf("\n");
	}
	
	return 0;
}
