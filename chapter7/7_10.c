//7.10 ˰��

#include <stdio.h>
#define SAL_1 17850
#define SAL_2 23900
#define SAL_3 29750
#define SAL_4 14875
#define RATE_1 0.15
#define RATE_2 0.28

int main(void){
	double salary,grand,rate;
	int num;
	
	print:
	printf("1)����    2)����\n");
	printf("3)�ѻ顢����  4)�ѻ顢����\n"); 
	printf("5)�˳�\n");
	while(printf("��ѡ������״����\n"),scanf("%d", &num) == 1){
		switch(num){
			case 1:
				grand = SAL_1;
				break;
			case 2:
				grand = SAL_2;
				break;
			case 3:
				grand = SAL_3;
				break;
			case 4:
				grand = SAL_4;
				break;
			case 5:
				return 0;
			default:
				goto print; 
		}
		printf("�������������룺");
		scanf("%lf", &salary);
		if(salary<grand){
			rate = salary * RATE_1;
		}
		if(salary>grand){
			rate = grand * RATE_1 + (salary - grand) * RATE_2;
		}
		printf("��Ӧ�ý��ɵ�˰��Ϊ��%lf\n", rate); 
	}
	return 0;
} 
