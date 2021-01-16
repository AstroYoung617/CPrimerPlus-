//6.15 倒序输出输入的字符

#include <stdio.h>

int main(void){
	char ch[255];
	int i = 0;
	
	printf("请输入一行字符：");
	while(scanf("%c",&ch[i]),ch[i]!='\n'){
		i++;
	}
	for(;i>=0;i--){
		printf("%c",ch[i]);
	}
	
	return 0;
} 
