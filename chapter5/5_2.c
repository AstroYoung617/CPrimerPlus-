//5.2 ����һ������ӡ�ȸ�����10����������

#include <stdio.h>

int main(void){
	int n;
	int i=0;
	printf("������һ��������");
	scanf("%d", &n);
	
	while(i++<11){
		printf("%d	", n++);
	}
	return 0;
} 
