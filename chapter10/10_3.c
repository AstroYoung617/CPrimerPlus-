//��дһ�����������ش洢��int���������е����ֵ������һ���򵥵ĳ����в��Ըú��� 

#include <stdio.h>
#define NUM 5
int Big(int arr[], int num); 

int main(void){
	int array[NUM] = {2, 5, 8, 15, 3};
	
	printf("%d", Big(array, NUM));
	
	return 0;
}

int Big(int arr[], int num){
	int i, big;
	
	for(i = 0, big = arr[0]; i < num; i++){
		if(big < arr[i]){
			big = arr[i];
		}
	}

	return big;
}
