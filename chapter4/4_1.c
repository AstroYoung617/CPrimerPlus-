//4_1 编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印

#include <stdio.h>

int main(void){
	char lname[20],fname[20];
	
	printf("请输入名和姓");
	scanf("%s %s", fname, lname);
	printf("%s,%s", fname, lname); 
	return 0;
} 
