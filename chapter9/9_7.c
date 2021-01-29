//9.7 世俗的很多东西会影响我们的所做所为，因为我们都还是世俗的人。
//		编写函数读取字符，如果是字母则返回一个数值位置 

#include <stdio.h>
#include <ctype.h> 
void get_ch(void);
int alpha(char);

int main(void){
	get_ch();
	return 0;
} 

void get_ch(void){
	char ch;
	
	while((ch = getchar()) != EOF){
		if(ch == "\n")
			continue;
		putchar(ch);
		printf("%d ", alpha(ch));
	}
	return;
}

int alpha(char input){
	
	if(isalpha(input)){
		if(isupper(input)){
			return(input-'A'+1);
		}
		else if(islower(input)){
			return(input-'a'+1);
		}
	}
	else
		return -1; 
}
