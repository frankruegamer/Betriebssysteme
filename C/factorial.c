#include <stdio.h>

int fak_it(int n)
{
	int product = n;
	for(--n ; n > 0; --n)
		product *= n;
	return product;
}

int fak_rek(int n)
{
	return ((n == 1) ? n : n * fak_rek(n - 1));
}

int main()
{
	int n = 5;
	printf("iterativ: %d! = %d\n", n, fak_it(n));
	printf("rekursiv: %d! = %d\n", n, fak_rek(n));
}
