//10.11����һ��3 X 5int ���͵Ķ�ά���飬�������Ԫ��ֵ����

#include <stdio.h>
#define ROWS 3
#define COLS 5
void two(int arr[][COLS], int rows);
void print(int ar[][COLS], int raws);

int main(void){
	int arr[ROWS][COLS] = {{3, 2, 5, 4, 7},{6, 5, 1, 2, 8},{9, 6, 3, 2, 15}};
	printf("ԭ���飺\n");
	print(arr, ROWS);
	printf("\n");
	two(arr, ROWS);
	printf("���������飺\n");
	print(arr, ROWS);	
	printf("\n");	
	return 0;
} 

void two(int arr[][COLS], int rows){
	int r, c;
	
	for(r = 0; r < rows; r++){
		for(c = 0; c < COLS; c++){
			arr[r][c] = 2 * arr[r][c];
		}
	}
}

void print(int ar[][COLS], int raws){
	int r, c;
	
	for(r = 0; r < raws; r++){
		for(c = 0; c < COLS; c++){
			printf("%d ", ar[r][c]);
		}
		printf("\n");
	}
	
}
