// 6.1 ����һ������26��Ԫ�ص�����洢26��Сд��ĸ��Ȼ���ӡ

#include <stdio.h>

int main(void){
	char ch[26];
	int i;
	
	for(i = 0; i<26; i++){
		ch[i] = 'a' + i;
		printf("%c  ", ch[i]);
	}

	return 0;
} 
