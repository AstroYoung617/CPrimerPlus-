//6.7 ����һ�����ʣ��������

#include <stdio.h>
#include <string.h>

int main(void){
	char ch[20];
	int i;
	
	printf("������һ������:"); 
	scanf("%s",ch);
	for(i=strlen(ch);i>=0;i--){
		printf("%c",ch[i]);
	}
	return 0;
} 
