//9.4 计算调和平均数

#include <stdio.h>
double count(double, double);

int main(void){
	double a,b;
	
	scanf("%lf %lf", &a, &b);
	printf("%.2lf",count(a,b));
	return 0;
} 

double count(double a, double b){
	double result;
	result = 1/((1 / a + 1 / b)/2);
	return result;
}
