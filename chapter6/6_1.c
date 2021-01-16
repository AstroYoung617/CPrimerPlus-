// 6.1 创建一个包含26个元素的数组存储26个小写字母，然后打印

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
