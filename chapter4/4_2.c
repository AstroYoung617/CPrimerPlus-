//4_2 提示用户输入名字，以不同方式输出

#include<stdio.h>

int main(void){
	char name[40];
	int width;
	printf("请输入名字：");
	scanf("%s", name);
	width = strlen(name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", width+3, name);
	return 0;
} 
