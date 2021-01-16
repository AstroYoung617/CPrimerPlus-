//  6.5 输入字母打印如下格式

/*
	A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA 
*/ 

#include <stdio.h>

int main(void){
	char max;//输入的字母作为循环时的最大字母 
	char ch,zh;//ch用于控制行数，zh用于控制正向和反向输出 
	int i; 
	
	do{
		printf("请输入大写字母：");
		scanf("%c", &max);
	}while(max<'A'||max>'Z');
	
	for(ch = 'A';ch<=max;ch++){
		for(i=0;i<max-ch;i++){ //输出空格的循环 
			printf(" ");
		}
		for(zh = 'A';zh<ch;zh++){ //正向输出的循环 
			printf("%c", zh);
		}
		for(;zh>='A';zh--){ //反向输出的循环 
			printf("%c", zh);
		}
		for(i=0;i<max-ch;i++){ //输出空格的循环 
			printf(" ");
		}
		printf("\n");
		
	}
	
	return 0;
}
