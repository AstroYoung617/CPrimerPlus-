//10.9 初始化一个double类型的3X5二维数组，使用一个处理变长数组的函数将其拷贝至另一个二维数组中
//还要编一个以变长数组为形参的函数以显示两个数组的内容。这两个函数应该能处理任意MXN数组

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
	printf("原始数组为：\n");
	print(arr, ROWS);
	printf("\n");
	printf("复制后的数组为：\n");
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
