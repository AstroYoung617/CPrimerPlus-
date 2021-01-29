//9.11 Fibonacci

#include <stdio.h>	

long Fibonacci(long n);

int main(void) {
	long n;

	printf("Test Fibonacci() function\n");
	printf("Enter an integer n: ");

	while (scanf("%ld", &n) == 1)
	{
		printf("Fibonacci #%ld = %ld\n", n, Fibonacci(n));

		printf("Enter an integer n: ");
	}

	return 0;
}

long Fibonacci(long n)
{
	if (n < 1)
	{
		printf("Error: n must be a positive integer.\n");
		return -1;
	}

	long i, fib_n1 = 0, fib_n = 1, fib_n2;

	if (n == 1) return fib_n1;
	if (n == 2) return fib_n;

	for (i = 3; i <= n+1; i++)
	{
		fib_n2 = fib_n1;
		fib_n1 = fib_n;
		fib_n = fib_n1 + fib_n2;
	}

	return fib_n;
}
