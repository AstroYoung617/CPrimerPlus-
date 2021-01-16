//6.9 修改6.8使用一个函数返回结果

#include <stdio.h>
float count(float n, float m);
	
int main(void){
	float a,b;
	printf("请输入两个浮点数：");
	while(scanf("%f %f", &a, &b)==2){
		printf("结果为：%f", count(a,b
		));
	}
	
	return 0;
} 

float count(float n, float m){
	return (n-m)/(n*m);
} 
