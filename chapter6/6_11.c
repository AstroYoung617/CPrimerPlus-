//6.11 ��дһ�������������ж���8��������Ȼ�����ӡ��8������

#include <stdio.h>

int main(void){
	int num[8];
	int i,j;
	
	printf("������8������:");
	for(i=0;i<8;i++){
		scanf("%d", &num[i]);
	}
	printf("�䵹��Ϊ��");
	for(j=7;j>=0;j--){
		printf(" %d", num[j]);
	} 
	return 0;
} 
