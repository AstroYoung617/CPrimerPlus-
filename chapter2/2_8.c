#include <stdio.h>
int one_three(void);
int two(void);

int main(void){
	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;
} 

int one_three(void){
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}

int two(void){
	printf("two\n");
	return 0;
}
