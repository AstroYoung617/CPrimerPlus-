//4_2 ��ʾ�û��������֣��Բ�ͬ��ʽ���

#include<stdio.h>

int main(void){
	char name[40];
	int width;
	printf("���������֣�");
	scanf("%s", name);
	width = strlen(name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", width+3, name);
	return 0;
} 
