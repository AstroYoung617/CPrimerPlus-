//3_8 ���뱭������Ʒ�ѡ���˾�����ס�����Ϊ��λ���

#include <stdio.h>
#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3

int main(void){
	float cup;
	
	printf("�����뱭����");
	scanf("%f", &cup);
	printf("%f������%fƷ��\n", cup, cup/PINT_CUP);
	printf("%f������%f��˾\n", cup, cup*CUP_OUNCE);
	printf("%f������%f����\n", cup, cup*CUP_OUNCE*OUNCE_SPOON);
	printf("%f������%f����\n", cup, cup*CUP_OUNCE*OUNCE_SPOON*SPOON_TEA);
	return 0;
} 
