//10.10 把两个数组中相对应的元素相加，然后把结果存储到第3个数组中。

#include <stdio.h>
#define NUM 5
void add(int tar[], int ar1[], int ar2[], int num);
void print(int ar[], int num);

int main(void){
	int arr1[NUM] = {2, 5, 1, 0, 3};
	int arr2[NUM] = {6, 8, 1, 2, 5};
	int arr3[NUM];
	
	add(arr3, arr2, arr1, NUM);
	printf("array1:");
	print(arr1, NUM);
	printf("\n");
	printf("array2:");
	print(arr2, NUM);
	printf("\n");
	printf("array1 + array2 = ");
	print(arr3, NUM);
	return 0;
} 

void add(int tar[], int ar1[], int ar2[], int num){
	int i;
	
	for(i = 0; i < num; i++){
		tar[i] = ar1[i] + ar2[i];
	}
}

void print(int ar[], int num){
	int i;
	
	for(i = 0; i < num; i++){
		printf("%d ", ar[i]);
	}
} 
