//8.1设计一个程序，统计在读到结尾之前读取的字符数 
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
	printf("该文件共有 %d 个字符", count);
	return 0;
}
