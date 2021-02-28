//10.5 编写一个函数返回存储在double类型数组中的最大值和最小值的差值

#include <stdio.h>
double dif(double *arr, int n);

int main(void){
	double array[] = {2.1, 5.6, 5.8, 12.3, 3.3};
	printf("最大最小值的差值为：%.1lf", dif(array, 5));
	return 0;
} 

double dif(double arr[], int n){
	double min, max;
	int i;
	
	for(i = 1, min = arr[0], max = arr[0]; i < n; i++){
		if(min > arr[i])
			min = arr[i];
		if(max < arr[i])
			max = arr[i]; 
	}
	return max - min;
}
