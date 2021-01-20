//7.9 输入一个正数，输出所有小于该数的素数

#include <stdio.h>
#include <stdbool.h>

int main(void){
	unsigned long num;
	unsigned long div;
	unsigned long i;
	bool isPrime;
	printf("请输入一个正整数(输入q退出)：\n"); 
	while(scanf("%lu", &num) == 1){
		printf("比它小的素数有：");
		for(i = 1;i<=num;i++){
		for(div = 2, isPrime = true; (div * div) <= i; div++){
			if(i % div == 0){
				isPrime = false;
			}
		}
		if(isPrime){
			printf("%lu ", i);
		}
		}
		printf("\n请输入一个正整数(输入q退出)：\n"); 
	}
	
	return 0;
} 
