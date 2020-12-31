//3_5 编写程序，用户输入年龄，显示对应的秒数

#include <stdio.h>

int main(void){
	float second = 3.156e7;
	int age;
	
	printf("Please ENTER your age：");
	scanf("%d", &age);
	printf("You are %e seconds old", age * second); 
	return 0;
} 
