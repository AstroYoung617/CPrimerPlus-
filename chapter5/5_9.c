//5.9 输入华氏温度（double）将其作为参数传递给自定义函数Temperatures()
//		计算摄氏温度和开氏温度，并以小数点后面两位数字的精度展示

#include <stdio.h>
double Temperature(double n);

int main(void){
	double value;	//用户输入的温度值 
	printf("请输入华氏温度值：");
	while(scanf("%lf", &value)==1){
		Temperature(value); 	
		tprintf("请继续输入（输入q退出）");
	}
	return 0;
} 

double Temperature(double n){
	const double F_TO_C = 32;
	const double F_TO_K = 273.16;
	double c, k;
	
	c = 5.0/9.0*(n - 32);
	k = c + 273.16;
	printf("%.2f 华氏度 等于 %.2f 摄氏度 %.2f 开氏度\n", n, c, k);
	
	return 0;
}
