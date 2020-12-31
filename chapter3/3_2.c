//3_2 编写一个程序要求输入ASCII码，然后输出其对应字符

#include <stdio.h>

int main(void){
	int ch;
	printf("请输入ASCII码：");
	scanf("%d", &ch);
	printf("其对应字符为：%c", ch);
	return 0;
} 
