//3_5 ��д�����û��������䣬��ʾ��Ӧ������

#include <stdio.h>

int main(void){
	float second = 3.156e7;
	int age;
	
	printf("Please ENTER your age��");
	scanf("%d", &age);
	printf("You are %e seconds old", age * second); 
	return 0;
} 
