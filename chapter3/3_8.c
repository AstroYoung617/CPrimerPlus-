//3_8 输入杯数，以品脱、盎司、汤勺、茶勺为单位输出

#include <stdio.h>
#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3

int main(void){
	float cup;
	
	printf("请输入杯数：");
	scanf("%f", &cup);
	printf("%f杯等于%f品脱\n", cup, cup/PINT_CUP);
	printf("%f杯等于%f盎司\n", cup, cup*CUP_OUNCE);
	printf("%f杯等于%f汤勺\n", cup, cup*CUP_OUNCE*OUNCE_SPOON);
	printf("%f杯等于%f茶勺\n", cup, cup*CUP_OUNCE*OUNCE_SPOON*SPOON_TEA);
	return 0;
} 
