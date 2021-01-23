//8.2 编写程序打印输入的字符及其ASCII值

#include <stdio.h>
#define CTRL 64
#define SPACE 32
#define COL 10

int main(void){
	char ch;
	int count = 0;
	
	while((ch = getchar()) != EOF){
		count++;
		if(ch == '\n'){
			printf("\\n");
			printf(":%-5d  ", ch);
		}
		else if(ch == '\t'){
			printf("\\t");
			printf(":%-5d  ", ch);
		}
		else if(ch <= SPACE){
			putchar(ch);
			printf(":^%-5d  ", ch+CTRL); 
		}
		else{
			putchar(ch);
			printf(":%-5d  ", ch);	
		}
		if (count % COL == 0){
			printf("\n"); 
		}
	}
	return 0;
} 
