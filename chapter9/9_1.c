//9.1 返回两个double类型值的较小值

#include <stdio.h>
double min(double, double);

int main(void){
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%.2lf",min(a,b));
	return 0;
} 

double min(double x, double y){
	return x<y?x:y;
}
