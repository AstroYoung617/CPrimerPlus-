//9.10 改进程序清单9.8

#include <stdio.h>
void to_binary(unsigned long n, int m);

int main(void){
	unsigned long number;
	int num;
	
	printf("Enter two integer (q to quit):\n");
	while(scanf("%lu %d", &number, &num) == 2){
		printf("Binary equivalent: ");
		to_binary(number,num);
		putchar('\n');
		printf("Enter two integer (q to quit):\n");
	}
	printf("Done\n");
	
	return 0;
} 

void to_binary(unsigned long n, int m){
	int r;
	
	if(m < 2 || m > 10){
		printf("Error: base must be between 2 and 10.");
		return;
	}
	
	r = n % m;
	if(n >= m)
		to_binary(n / m,m);
	printf("%d", r);
	
	return;
}
