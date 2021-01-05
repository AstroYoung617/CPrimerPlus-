//5.5 修改程序清单5.13使其可以按照天数来计算

#include <stdio.h>

int main(void){
	int count = 0, sum = 0;
	
	printf("输入工作的天数:");
	scanf("%d", &count);
	while(count > 0){
		sum = sum + count --;
	}
	printf("你总共挣了 %d \n", sum);
	return 0;
} 
