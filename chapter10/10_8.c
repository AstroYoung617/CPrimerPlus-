//10.8 把一个内含7个元素的数组中第3到第5个元素拷贝至内含3个元素的数组中

#include <stdio.h>
void copy_arr(double target1[], double source[], int num);

int main(void){
	double arr[7] = {3.1, 5.2, 3.2, 6.2, 9.1, 5.6, 4.0};
	double target[3];
	
	copy_arr(target, arr+2, 3);
	return 0;
} 

void copy_arr(double target1[], double source[], int num){
	int i;
	
	for(i = 0; i < num; i++){
		target1[i] = source[i];
		printf("%.1lf ", target1[i]);
	}
	printf("\n");
}
