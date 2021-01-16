//6.17 Chuckie Lucky:A fucking lucky guy, who won a big piece, 1,000,000 dollars. Then
// he deposit his money in the bank, with the 8% rate an year, and every last day of the year, 
// he checked out 100,000 dollars from the bank.
//Question:
//How many years will he spend to take out all of his money?

#include <stdio.h>
#define RATE 0.08
#define MONEY 1000000
#define OUT 100000
int main(void){
	int year = 0;
	double luck;
	
	luck = MONEY;
	while(luck>=0){
		luck += luck * RATE;
		luck -= OUT;
		year++;
	}
	printf("He will spend %d years to take out all money!", year);
	return 0;
} 
