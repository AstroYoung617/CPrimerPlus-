//6.14 两个数组，第二个是前面数组的和

#include <stdio.h>
#define SIZE 8
int main(void)
{
    double arr1[SIZE], arr2[SIZE];
    int i, j, k;

    printf("Enter 8 numbers to the first array:\n");
    for (i = 0; i < SIZE; i++)
        scanf("%lf", &arr1[i]);					
    arr2[0] = arr1[0];
    for (i = 1, j = 1; i < SIZE; i++, j++)
        arr2[j] = arr2[j-1] + arr1[i];
    printf("The first array:  ");
    for (k=0; k < SIZE; k++) {
        printf("%6.2f", arr1[k]);
    }													
    printf("\nThe second array: ");
    for (k=0; k < SIZE; k++) {
        printf("%6.2f", arr2[k]);				
    }
    printf("\n");

    return 0;
}
