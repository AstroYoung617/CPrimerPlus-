// 10.4 ��дһ�����������ش洢��double�������������ֵ���±꣬����һ���򵥵ĳ����в��Ըú��� 

#include <stdio.h>
int maxsub(double *array, int num);

int main(void){
	double arr[] = {5.1, 6.0, 9.6, 22.5, 2.1};

	printf("���ֵ���±�Ϊ %d", maxsub(arr, 5));	
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

