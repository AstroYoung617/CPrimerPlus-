//6.12 ���������������еĺ�

#include <stdio.h>

int main(void){
	float i,j;
	int n;
	float sum,sum1;
	
	printf("�����������"); 
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		sum = sum + 1/i;
	}
	for(i=1,j=-2;i<=n||j>=-n;i=i+2,j=j-2){
		sum1 = sum1 + 1/i + 1/j;
	}
	printf("%lf\n%lf", sum, sum1);
	return 0;
} 
