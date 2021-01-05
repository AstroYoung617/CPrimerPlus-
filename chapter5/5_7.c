// 5.7 输入一个double类型的数，打印该数的立方。设计一个函数打印立方，main将用户输入的值传给函数

#include <stdio.h>
double cube(double d);

int main(void){
	double n;
	
	printf("请输入一个数：");
	scanf("%lf", &n);
	cube(n);
	return 0;
} 

double cube(double d){
	d = d * d * d;
	printf("该数的立方为%.3lf", d);
	return 0;
}
