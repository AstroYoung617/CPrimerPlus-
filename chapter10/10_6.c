//10.6 把double类型数组中的数据倒序排列

#include <stdio.h>
void rev(double *ar, int n);

int main(void){
	double arr[] = {2.1, 5.3, 3.3, 5.1, 6.4, 9.3};
	rev(arr, 5);
	return 0;
} 

void rev(double ar[], int n){
	int i, m;
	double temp;
	
	m = n;
	for(i = 0; i < m; i++, m--){
		temp = ar[i];
		ar[i] = ar[m];
		ar[m] = temp;
	}
	
	for(i = 0; i <= n; i++){
		printf("%.1lf ", ar[i]);
	}
}
