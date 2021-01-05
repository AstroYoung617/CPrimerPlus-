//5.8 显示求模运算的结果

#include <stdio.h>

int main(void){
	int first, second; 
	
	printf("请输入一个数作为第二个操作数：");
	scanf("%d", &second);
	printf("请输入一个数作为第一个操作数：");
	scanf("%d", &first);	
	while(first > 0){
		printf("%d 对 %d 取模为：%d %% %d = %d\n", first, second, first, second, first%second);
		printf("请继续输入一个数作为第一个操作数(输入<=0的数结束)\n");
		scanf("%d", &first);
	}
	return 0;
} 
