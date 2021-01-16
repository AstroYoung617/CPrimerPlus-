//6.7 输入一个单词，倒序输出

#include <stdio.h>
#include <string.h>

int main(void){
	char ch[20];
	int i;
	
	printf("请输入一个单词:"); 
	scanf("%s",ch);
	for(i=strlen(ch);i>=0;i--){
		printf("%c",ch[i]);
	}
	return 0;
} 
