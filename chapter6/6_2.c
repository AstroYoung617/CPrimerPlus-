// 6.2 ʹ��Ƕ��ѭ����ӡ�ַ�
/*
$
$$
$$$
$$$$
$$$$$
*/ 

#include <stdio.h>

int main(void){
	int i,j;
	
	for(i = 0; i<5; i++){
		for(j = 0; j<i + 1; j++){
			printf("$"); 
		}
		printf("\n");
	}
	
	return 0;
}
