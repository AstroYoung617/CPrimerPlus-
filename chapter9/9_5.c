//9.5 将较大值重新赋值给两个double类型变量

#include <stdio.h>
double larger_of(double*, double*);

int main(void){
	double m,n;
	
	scanf("%lf %lf", &m, &n);
	printf("before: m = %.2lf , n = %.2lf\n", m, n);
	larger_of(&m,&n);
	printf("after: m = %.2lf , n = %.2lf\n", m, n);
	return 0;
} 

double larger_of(double *a, double *b){
	if(*a > *b){
		*b = *a;
	}
	else 
		*a = *b;
	return 0;
}
