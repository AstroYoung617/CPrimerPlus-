//9.7 ���׵ĺܶණ����Ӱ�����ǵ�������Ϊ����Ϊ���Ƕ��������׵��ˡ�
//		��д������ȡ�ַ����������ĸ�򷵻�һ����ֵλ�� 

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
