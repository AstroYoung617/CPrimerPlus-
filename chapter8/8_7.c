//8.7 �޸ĵ����µı����ϰ8�����ַ��������ֱ�ǲ˵�ѡ���q����5��Ϊ��������ı�ǡ�

//7.8 �޸�7.7 

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
	char grand;
	Print:
	printf("********************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr                                           b) $9.33/hr\n");
	printf("c) $10.00/hr                                          d) $11.20/hr\n");
	printf("q) quit\n");
	printf("********************************************************************\n");
	while((grand = getchar()) !=  'q'){
		switch(grand){
			case 'a':
				DPH = SALARY_1;
				break;
			case 'b':
				DPH = SALARY_2;
				break;
			case 'c':
				DPH = SALARY_3;
				break;
			case 'd':
				DPH = SALARY_4;
				break;
			default:
				printf("��������ȷ��ѡ�\n");
				if(getchar() != '\n')
					;
				goto Print;
		}
		printf("�����뱾�ܹ�����Сʱ����");
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
			printf("������Ϊ��%.2f , ˰��Ϊ��%.2f, ������Ϊ��%.2f\n", all, rate, all-rate);
			while(getchar() != '\n')
				continue;
	}
	printf("Bye!\n");
	return 0;
}  
