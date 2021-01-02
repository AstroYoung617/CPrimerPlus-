// 4_6 输入名再输入姓，输出姓名输出字数

#include <stdio.h>

int main(void){
	char name[20];
	char surname[20];
	
	printf("请输入名：");
	scanf("%s", name);
	printf("请输入姓：");
	scanf("%s", surname);
	printf("%10s %10s\n%10d %10d\n", name, surname, strlen(name), strlen(surname)); 
	printf("%-10s %-10s\n%-10d %-10d", name, surname, strlen(name), strlen(surname)); 
	return 0;
} 
