//8.1���һ������ͳ���ڶ�����β֮ǰ��ȡ���ַ��� 
#include <stdio.h>
#include <ctype.h>

int main(void){
	int count;
	char ch;
	
	while((ch = getchar()) != EOF){
		if(isspace(ch))
			continue;
		count++;
	}
	printf("���ļ����� %d ���ַ�", count);
	return 0;
}
