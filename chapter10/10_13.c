//10.13 编写一个函数提醒用户输入三组数，每组数包含5个double类型的数
//完成以下任务
//a.把用户输入的数据存储在3X5的数组中
//b.计算每组5个数据的平均值 
//c.计算所有数据的平均值 
//d.找出这15个数据中的最大值 
//e.打印结果

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
	
	printf("请输入3组小数，每组5个(输入q退出)：");	
	Into(array, ROWS);
	Print(array, ROWS);
	printf("\n每一组的平均值为："); 
	for(r = 0; r < ROWS; r++){
		printf("%.1lf ", Ave5(array[r]));
	}
	printf("\n所有数的平均值为：%.1lf ", Ave(array, ROWS));
	printf("\n最大值为：%.1lf", Max(array, ROWS));
	return 0;
} 

void Into(double arr[][COLS], int rows){//把用户输入的数据存储在3X5的数组中
	int r, c;
	
	for(r = 0; r < rows; r++){
		for(c = 0; c < COLS; c++){
				scanf("%lf", &arr[r][c]);
		}
	}
}

double Ave5(double arr[]){//计算每组5个数据的平均值 
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

void Print(double arr[][COLS], int rows){//打印结果 
	int r, c;
	for(r = 0; r < rows; r++){
		for(c = 0; c < COLS; c++){
				printf("%.1lf ", arr[r][c]);
		}
		printf("\n"); 
	}
}
