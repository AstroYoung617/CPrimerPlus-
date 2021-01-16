//6.10 计算用户输入的上限到下限的平方和

#include <stdio.h>
int main(void)
{
    int lower, upper;
    int num, sum;
    
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);
    while (lower < upper)
    {
        for (sum=0, num=lower; num <= upper; num++)
            sum = sum + num * num;                
        printf("The sums of the squares from %d to %d is %d\n",
        lower * lower, upper * upper, sum);      
    
        printf("Enter next set of limits: ");
        scanf("%d %d", &lower, &upper);          
    }
    printf("Done\n");
    
    return 0;
}
