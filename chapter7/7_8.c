//7.8 修改7.7 

#include <stdio.h>
#define RATE_1 0.15
#define RATE_2 0.2
#define RATE_3 0.25
#define SALARY_1 8.75
#define SALARY_2 9.33
#define SALARY_3 10.00
#define SALARY_4 11.20

int main(void){
	int hour;
	float all,rate,gross,DPH,rpd;
	int grand;
	Print:
	printf("********************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr                                           2) $9.33/hr\n");
	printf("3) $10.00/hr                                          4) $11.20/hr\n");
	printf("5) quit\n");
	printf("********************************************************************\n");
	while(scanf("%d", &grand) == 1){
		switch(grand){
			case 1:
				DPH = SALARY_1;
				break;
			case 2:
				DPH = SALARY_2;
				break;
			case 3:
				DPH = SALARY_3;
				break;
			case 4:
				DPH = SALARY_4;
				break;
			case 5:
				return 0;
			default:
				printf("请输入正确的选项！\n");
				goto Print;
		}
		printf("请输入本周工作的小时数：");
		scanf("%d", &hour);
			if(hour > 40){
				all = 40*DPH+(hour-40)*1.5*DPH;
			}
			else
				all = hour*DPH;
			if(all<=300){
				rate = all*RATE_1;
			}
			else if(all>300&&all<=450){
				rate = 300*RATE_1 + (all-300)*RATE_2;
			}
			else
				rate = 300*RATE_1 + 150*RATE_2 + (all-450)*RATE_3;
			printf("总收入为：%.2f , 税金为：%.2f, 净收入为：%.2f\n", all, rate, all-rate);
	}
	return 0;
} 
