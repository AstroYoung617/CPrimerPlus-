//6.13 for �� do while ��ʹ��

#include <stdio.h>

int main(void){
	int num[8];
	int i;
	
	for(i=0;i<8;i++){
		num[i] = pow(2,i+1);
	}
	i=0;
	do{
		printf(" %d", num[i]);
		i++;
	}while(i<8);
	return 0;
} 
