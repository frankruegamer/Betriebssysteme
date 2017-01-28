#include <stdio.h>
#include <string.h>

int checkIsbn(char * c)
{
	if (strlen(c) != 10) return 1;

	char t;
	int sum = 0;
	for (int i = 1; i <= 10; ++i)
	{
		t = *(c + i - 1);
		int n = (t - '0');
		if (n < 0 || n > 10) return 1;

		sum += i * n;
	}
	return (sum % 11);
}

int main(int argc, char * argv[])
{
	for (int i = 1; i < argc; ++i)
	{
		char* isbn = argv[i];
		
		printf("%s ist %s.\n", isbn, (!checkIsbn(isbn) ? "korrekt" : "falsch"));
	}
}
