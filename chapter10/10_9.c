//10.9 ��ʼ��һ��double���͵�3X5��ά���飬ʹ��һ������䳤����ĺ������俽������һ����ά������
//��Ҫ��һ���Ա䳤����Ϊ�βεĺ�������ʾ������������ݡ�����������Ӧ���ܴ�������MXN����

#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy(double ar[][COLS], double tar[][COLS], int raws);
void print(double ar[][COLS], int raws);

int main(void){
	double arr[ROWS][COLS] = {
						{3.1, 2.2, 6.2, 5.1, 8.2
						},
						{5.0, 2.0, 2.3, 5.5, 6.6
						},
						{8.1, 2.5, 6.7, 5.6, 8.8 
						}};
	double target[ROWS][COLS];
	copy(arr, target, ROWS);
	printf("ԭʼ����Ϊ��\n");
	print(arr, ROWS);
	printf("\n");
	printf("���ƺ������Ϊ��\n");
	print(target, ROWS);
	printf("\n"); 
	return 0;
} 

void copy(double ar[][COLS], double tar[][COLS], int raws){
	int r, c;
	
	for(r = 0; r < raws; r++){
		for(c = 0; c < COLS; c++){
			tar[r][c] = ar[r][c];
		}
	}
}

void print(double ar[][COLS], int raws){
	int r, c;
	
	for(r = 0; r < raws; r++){
		for(c = 0; c < COLS; c++){
			printf("%.1lf ", ar[r][c]);
		}
		printf("\n");
	}
	
}
