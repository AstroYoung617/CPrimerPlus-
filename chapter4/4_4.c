//4_4 ������ߺ����������

#include <stdio.h>
#define meter 100//1 meter equal 100 cm

int main(void){
	float cm;
	char name[40];
	
	printf("���������(cm)��������");
	scanf("%f %s", &cm, name);
	printf("%s, you are %.3f meter tall", name, cm/meter);
	return 0;
} 
