//10.13 ��дһ�����������û�������������ÿ��������5��double���͵���
//�����������
//a.���û���������ݴ洢��3X5��������
//b.����ÿ��5�����ݵ�ƽ��ֵ 
//c.�����������ݵ�ƽ��ֵ 
//d.�ҳ���15�������е����ֵ 
//e.��ӡ���

#include <stdio.h>
#define ROWS 3
#define COLS 5
void Into(double arr[][COLS], int rows);
void Print(double arr[][COLS], int rows);
double Ave5(double arr[]);
double Ave(double arr[][COLS], int rows);
double Max(double arr[][COLS], int rows);

int main(void){
	double array[ROWS][COLS];
	int r, c;
	
	printf("������3��С����ÿ��5��(����q�˳�)��");	
	Into(array, ROWS);
	Print(array, ROWS);
	printf("\nÿһ���ƽ��ֵΪ��"); 
	for(r = 0; r < ROWS; r++){
		printf("%.1lf ", Ave5(array[r]));
	}
	printf("\n��������ƽ��ֵΪ��%.1lf ", Ave(array, ROWS));
	printf("\n���ֵΪ��%.1lf", Max(array, ROWS));
	return 0;
} 

void Into(double arr[][COLS], int rows){//���û���������ݴ洢��3X5��������
	int r, c;
	
	for(r = 0; r < rows; r++){
		for(c = 0; c < COLS; c++){
				scanf("%lf", &arr[r][c]);
		}
	}
}

double Ave5(double arr[]){//����ÿ��5�����ݵ�ƽ��ֵ 
	int c;
	double total, result;
	
	for(c = 0; c < COLS; c++){
		total += arr[c];
	}
	result = total / COLS;
	
	return result;
} 

double Ave(double arr[][COLS], int rows){
	int r, c;
	double total, result;
	
	for(r = 0; r < rows; r++){
		for(c = 0; c < COLS; c++){
			total += arr[r][c];
		}
	}
	
	result = total / (rows * COLS);
	
	return result;
}

double Max(double arr[][COLS], int rows){
	int r, c;
	double max;
	
	for(r = 0, max = arr[0][0]; r < rows; r++){
		for(c = 0; c < COLS; c++){
			if(max < arr[r][c])
				max = arr[r][c];
		}
	}
	
	return max;
}

void Print(double arr[][COLS], int rows){//��ӡ��� 
	int r, c;
	for(r = 0; r < rows; r++){
		for(c = 0; c < COLS; c++){
				printf("%.1lf ", arr[r][c]);
		}
		printf("\n"); 
	}
}
