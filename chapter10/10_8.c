//10.8 ��һ���ں�7��Ԫ�ص������е�3����5��Ԫ�ؿ������ں�3��Ԫ�ص�������

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
