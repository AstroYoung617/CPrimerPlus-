//5.9 ���뻪���¶ȣ�double��������Ϊ�������ݸ��Զ��庯��Temperatures()
//		���������¶ȺͿ����¶ȣ�����С���������λ���ֵľ���չʾ

#include <stdio.h>
double Temperature(double n);

int main(void){
	double value;	//�û�������¶�ֵ 
	printf("�����뻪���¶�ֵ��");
	while(scanf("%lf", &value)==1){
		Temperature(value); 	
		tprintf("��������루����q�˳���");
	}
	return 0;
} 

double Temperature(double n){
	const double F_TO_C = 32;
	const double F_TO_K = 273.16;
	double c, k;
	
	c = 5.0/9.0*(n - 32);
	k = c + 273.16;
	printf("%.2f ���϶� ���� %.2f ���϶� %.2f ���϶�\n", n, c, k);
	
	return 0;
}
