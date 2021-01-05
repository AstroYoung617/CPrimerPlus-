//5.6 修改5.5使其计算整数的平方和 

#include <stdio.h>

int main(void){
	int count = 0, sum = 0;
	
	printf("输入工作的天数:");
	scanf("%d", &count);
	while(count > 0){
		sum = sum + count * count;
		count --;
	}
	printf("你总共挣了 %d \n", sum);
	return 0;
} 
