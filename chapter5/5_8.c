//5.8 ��ʾ��ģ����Ľ��

#include <stdio.h>

int main(void){
	int first, second; 
	
	printf("������һ������Ϊ�ڶ�����������");
	scanf("%d", &second);
	printf("������һ������Ϊ��һ����������");
	scanf("%d", &first);	
	while(first > 0){
		printf("%d �� %d ȡģΪ��%d %% %d = %d\n", first, second, first, second, first%second);
		printf("���������һ������Ϊ��һ��������(����<=0��������)\n");
		scanf("%d", &first);
	}
	return 0;
} 
