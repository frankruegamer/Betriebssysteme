#include <stdio.h>

unsigned long long fib(unsigned long long n)
{
	if (n < 2)
	{
		return n;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}

unsigned long long fib_it(unsigned long long n)
{
	unsigned long long a = 1, b = 0, k, t;
	
	for(k = 0; k < n; ++k)
	{
		t = a + b;
		a = b;
		b = t;
	}
	return b;
}

int main(int argc, char **argv)
{
	unsigned long long n;
	if (argc != 2)
	{
		printf("Bitte geben Sie 'n' ein\n");
		scanf("%llu", &n);
	}
	else
	{
		sscanf(argv[1], "%llu", &n);
	}
	printf("Fibonacci bei n=%llu entspricht %llu\n", n, fib_it(n));
	return 0;
}
