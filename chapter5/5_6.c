//5.6 �޸�5.5ʹ�����������ƽ���� 

#include <stdio.h>

int main(void){
	int count = 0, sum = 0;
	
	printf("���빤��������:");
	scanf("%d", &count);
	while(count > 0){
		sum = sum + count * count;
		count --;
	}
	printf("���ܹ����� %d \n", sum);
	return 0;
} 
