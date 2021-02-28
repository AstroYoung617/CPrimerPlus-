//10.7  初始化一个double类型二维数组， 实现拷贝至另一个数组

#include <stdio.h>
void copy_arr(double target1[], double source[], int num);

int main(void){
	double arr[3][3] = {{3.2, 2.1, 5.6}, 
						{2.5, 8.0, 6.2},
						{5.0, 2.3, 6.5}};
	double target[3][3];
	int i;
	
	for(i = 0; i < 3; i++){
		copy_arr(target[i], arr[i], 3);
	}
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
