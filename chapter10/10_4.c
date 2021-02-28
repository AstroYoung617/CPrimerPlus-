// 10.4 编写一个函数，返回存储在double类型数组中最大值的下标，并在一个简单的程序中测试该函数 

#include <stdio.h>
int maxsub(double *array, int num);

int main(void){
	double arr[] = {5.1, 6.0, 9.6, 22.5, 2.1};

	printf("最大值的下标为 %d", maxsub(arr, 5));	
	return 0;
}

int maxsub(double array[], int num){
	int i, max;
	
	for(max = 0, i = 1; i < num; i++){
		if(array[max] < array[i]){
			max = i;
		}
	}
	
	return max;
}

