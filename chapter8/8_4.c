//8.4 ͳ��ƽ��ÿ�����ʵ���ĸ����

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){
	char ch;
	int count_alpha = 0;
	int count_word = 0;
	bool flag = false;    //���ڱ���Ƿ��ڵ����� 
	
	printf("**�ó������ڼ����ı��е��ʵ�ƽ����ĸ��**\n\n");
	printf("�������ı�(���к���Ctrl+Z����)��\n"); 
	while((ch = getchar()) != EOF){
		if(isalpha(ch)){
			count_alpha++;
		}
		if(isalpha(ch)&&!flag){  
			flag = true;
			count_word++;
		}
		if(ispunct(ch) || isspace(ch)){
			flag = false;
		}
	}
	printf("������ĸ��%d�����е��ʣ�%d��ƽ��ÿ�������� %.2f ����ĸ��", count_alpha,count_word, 
			 (float)count_alpha/(float)count_word);
	return 0;
} 
