//6.15 �������������ַ�

#include <stdio.h>

int main(void){
	char ch[255];
	int i = 0;
	
	printf("������һ���ַ���");
	while(scanf("%c",&ch[i]),ch[i]!='\n'){
		i++;
	}
	for(;i>=0;i--){
		printf("%c",ch[i]);
	}
	
	return 0;
} 
