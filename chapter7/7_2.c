//7.2 ���ַ�ת���ɶ�Ӧ��ASCII�룬ÿ����ʾ8��

#include <stdio.h> 

int main(void){
	int count;
	char ch;
	
	while((ch = getchar()) != '#'){
		printf("%d ", ch);
		count++;
		if(count % 8 == 0)
			printf("\n");
	}
	return 0;
}
