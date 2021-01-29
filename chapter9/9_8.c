//9.8 坚持梦想本身就不是一件容易的事，想清楚这一点的人才能成功。这句话是《半泽直树》里面的 
//改进程序清单6.20 

#include <stdio.h>
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
	int i;
	
	if(n == 0&&p == 0){
		pow = 1;
	}
	
	if(p < 0){
		p = -p;
		for(i = 1; i <= p; i++)
			pow *= n;
		pow = 1/pow;
	}
	else if(p > 0){
		for(i = 1; i <= p; i++)
			pow *= n;	
	}
	else
		pow = 1;	
	return pow;
}
