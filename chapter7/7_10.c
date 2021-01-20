//7.10 税金

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
	printf("1)单身    2)户主\n");
	printf("3)已婚、共有  4)已婚、离异\n"); 
	printf("5)退出\n");
	while(printf("请选择您的状况：\n"),scanf("%d", &num) == 1){
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
		printf("请输入您的收入：");
		scanf("%lf", &salary);
		if(salary<grand){
			rate = salary * RATE_1;
		}
		if(salary>grand){
			rate = grand * RATE_1 + (salary - grand) * RATE_2;
		}
		printf("您应该缴纳的税金为：%lf\n", rate); 
	}
	return 0;
} 
