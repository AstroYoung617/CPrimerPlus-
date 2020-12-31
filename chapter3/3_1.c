//3_1±àĞ´³ÌĞò²âÊÔÒç³ö 

#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void){
	int big_int = 2147483647;
	float big_float = 3.4e38;
	float small_float = 10.0 / 3;
	printf("the big int data is %d\n", big_int + 1);
	printf("the big float data is %f\n", big_float * 10);
	printf("the big float data is %f\n", small_float);
	printf("the MAX float data is %f\n", FLT_MAX);
	printf("the MAX int data is %ld\n", INT_MAX);
	return 0;
} 
