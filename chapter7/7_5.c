//7.5  π”√switch÷ÿ–¥7.4

#include <stdio.h> 

int main(void){
	char ch;
	int count;
	
	count = 0;
	while((ch = getchar())!='#'){
		switch(ch){
			case'.':
				ch = '!';
				count++;
				break;
			case'!':
				putchar('!');
				count++;
				break;
		}
		putchar(ch);
	}
	printf("\n%d substitutions were made.\n", count);
	return 0;
} 
