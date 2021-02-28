//10.2 Êý×é¿½±´

#include <stdio.h>
void copy_arr(double[], double[], int);
void copy_ptr(double[], double[], int);
void copy_ptrs(double[], double[], double*);

int main(void){
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);
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

void copy_ptr(double target2[], double source[], int num){
	int i;
	
	for(i = 0; i < num; i++){
		*(target2 + i) = *(source + i);
		printf("%.1lf ", *(target2 + i));
	}
	printf("\n");
}

void copy_ptrs(double target3[], double source[], double *p){
	int i, num;
	
	num = p - source; 
	for(i = 0; i < num; i++){
		*(target3 + i) = *(source + i);
		printf("%.1lf ", *(target3 + i));
	}
	printf("\n");
}
