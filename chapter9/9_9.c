//9.9 ¿˚”√µ›πÈ÷ÿ–¥9.8

#include <stdio.h>
#include <stdlib.h>
double power(double n, int p);

int main(void){
	double x, xpow;
	int exp;
	
	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while(scanf("%lf %d", &x, &exp) == 2){
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	
	return 0;
}

double power(double n, int p){
	double pow = 1;
	
	if(n == 0){
		if(p == 0){
			printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
			return 1;
		}
		else 
			return 0;
	}
	if(p == 0)
		return 1;
	
	pow = n*power(n,abs(p)-1);
	
	if(p < 0)
		pow = 1/pow;
	
	return pow;
}
