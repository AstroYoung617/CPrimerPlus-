//6.16 Daphne ���� 10% Deirdre ���� 5%����Ͷ100��Ԫ���ʶ��Deirdre�ܳ���Daphne

#include <stdio.h>
#define SINGLE 0.1
#define PLURAL 0.05
#define MONEY 100

int main(void){
	double De,Da;
	int year = 1;
	De = MONEY;
	Da = MONEY;
	while(De<=Da){
		Da = (MONEY * SINGLE)*year + MONEY;
		De = De + De * PLURAL;
		year++;
	}
	printf("����������:%d ��,\n Deirdre��ǮΪ��%.2lf $, Daphne��ǮΪ��%.2lf $" ,
			 year-1, De, Da); 
	return 0;
} 
