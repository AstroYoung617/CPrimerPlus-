//7.9 ����һ���������������С�ڸ���������

#include <stdio.h>
#include <stdbool.h>

int main(void){
	unsigned long num;
	unsigned long div;
	unsigned long i;
	bool isPrime;
	printf("������һ��������(����q�˳�)��\n"); 
	while(scanf("%lu", &num) == 1){
		printf("����С�������У�");
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
		printf("\n������һ��������(����q�˳�)��\n"); 
	}
	
	return 0;
} 
