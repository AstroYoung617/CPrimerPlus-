//6.16 Daphne 单利 10% Deirdre 复利 5%，各投100美元，问多久Deirdre能超过Daphne

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
	printf("经过多少年:%d 年,\n Deirdre的钱为：%.2lf $, Daphne的钱为：%.2lf $" ,
			 year-1, De, Da); 
	return 0;
} 
