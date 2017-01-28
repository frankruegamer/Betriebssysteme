#include <stdio.h>

static int S = 0;

int overflow(int n)
{
	S %= 10;
	S += n;
	return S / 10;
}

int main()
{
	int nArray[] = { 5, 6, 12, 7, 2 };
	for (int n = 0; n < sizeof(nArray) / sizeof(nArray[0]); ++n)
		printf("%d\n", overflow(nArray[n]));
}
