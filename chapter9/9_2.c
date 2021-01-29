//9.2 打印指定的字符

#include <stdio.h>
void chline(char, int, int);

int main(void){
	chline('*',3,5);
	return 0;
} 

void chline(char ch, int i, int j){
	int a, b;
	
	for(a = 0; a < i; a++){
		for(b = 0; b < j; b++){
			putchar(ch);
		}
		putchar('\n');
	}
	return;
}
