//  6.5 ������ĸ��ӡ���¸�ʽ

/*
	A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA 
*/ 

#include <stdio.h>

int main(void){
	char max;//�������ĸ��Ϊѭ��ʱ�������ĸ 
	char ch,zh;//ch���ڿ���������zh���ڿ�������ͷ������ 
	int i; 
	
	do{
		printf("�������д��ĸ��");
		scanf("%c", &max);
	}while(max<'A'||max>'Z');
	
	for(ch = 'A';ch<=max;ch++){
		for(i=0;i<max-ch;i++){ //����ո��ѭ�� 
			printf(" ");
		}
		for(zh = 'A';zh<ch;zh++){ //���������ѭ�� 
			printf("%c", zh);
		}
		for(;zh>='A';zh--){ //���������ѭ�� 
			printf("%c", zh);
		}
		for(i=0;i<max-ch;i++){ //����ո��ѭ�� 
			printf(" ");
		}
		printf("\n");
		
	}
	
	return 0;
}
