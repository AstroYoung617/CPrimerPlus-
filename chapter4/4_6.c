// 4_6 �������������գ���������������

#include <stdio.h>

int main(void){
	char name[20];
	char surname[20];
	
	printf("����������");
	scanf("%s", name);
	printf("�������գ�");
	scanf("%s", surname);
	printf("%10s %10s\n%10d %10d\n", name, surname, strlen(name), strlen(surname)); 
	printf("%-10s %-10s\n%-10d %-10d", name, surname, strlen(name), strlen(surname)); 
	return 0;
} 
