//10.5 ��дһ���������ش洢��double���������е����ֵ����Сֵ�Ĳ�ֵ

#include <stdio.h>
double dif(double *arr, int n);

int main(void){
	double array[] = {2.1, 5.6, 5.8, 12.3, 3.3};
	printf("�����Сֵ�Ĳ�ֵΪ��%.1lf", dif(array, 5));
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
