//10.12 重写程序清单10.7 把main（）中的主要任务都改成用函数来完成

#include <stdio.h>
#define MONTHS 12
#define YEARS  5
void rainfall(float [][MONTHS], int);

int main(void){
	const float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
	rainfall(rain, YEARS);
	return 0;
} 

void rainfall(float rain[][MONTHS], int years)
{
    float subtot, total;
    int y, m;
    printf(" YEAR	    RAINFALL (inches)\n");
    for (y = 0, total = 0; y < years; y++)
    {	//每一年，各月降水量总和
        for (m = 0, subtot = 0; m < MONTHS; m++)
            subtot += rain[y][m];
        printf("%5d %15.1f\n", 2010 + y, subtot);
        total += subtot;	//5年的总降水量
    }
    printf("\n The yearly average is %.1f inches.\n\n", total / YEARS);
    printf(" MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");

    for (m = 0; m < MONTHS; m++)
    {
        for (y = 0, subtot = 0; y < years; y++)
            subtot += rain[y][m];
        printf("%4.1f ", subtot / years);
    }
    printf("\n");
}
