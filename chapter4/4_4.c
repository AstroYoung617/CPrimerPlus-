//4_4 输入身高和姓名，输出

#include <stdio.h>
#define meter 100//1 meter equal 100 cm

int main(void){
	float cm;
	char name[40];
	
	printf("请输入身高(cm)和姓名：");
	scanf("%f %s", &cm, name);
	printf("%s, you are %.3f meter tall", name, cm/meter);
	return 0;
} 
