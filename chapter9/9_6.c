//9.6 编写一个函数，以3个double变量的地址作为参数，把最小值放入第一个变量，
//中间值放入第二个，最大第三个。

#include <stdio.h> 
double sort(double*, double*, double*);

int main(void){
	double a, b, c;	
	
	scanf("%lf %lf %lf", &a, &b, &c);
	sort(&a, &b, &c);
	printf("after: %.2lf %.2lf %.2lf\n", a, b, c);
	return 0;
}

double sort(double *l, double *m, double *n){
	double min, middle, max;
	min = (*l < *m) ? (*l < *n ? *l : *n) : (*m < *n ? *m : *n); 
	max = (*l > *m) ? (*l > *n ? *l : *n) : (*m > *n ? *m : *n); 
	if(*l>min&&*l<max){
		middle = *l;
	}
	else if(*m>min&&*m<max){
		middle = *m;
	}
	else if(*n>min&&*n<max){
		middle = *n;
	}
	else if(min == max)
		middle = 0;
	else
		middle = min;
	*l = min;
	*m = middle;
	*n = max;
	return 0;
}

