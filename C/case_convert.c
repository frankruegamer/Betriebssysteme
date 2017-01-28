#include <stdio.h>
#include <string.h>

void convert(char* input)
{
	int length = strlen(input);
	int firstex;
	{
		char* firstp = strchr(input, '!');
		firstex = ((firstp != NULL) ? (firstp - input + 1) : -1);
	}
	// int firstex = strchr(input, '!') - input + 1;
	int lastex;
	{
		char* lastp = strrchr(input, '!');
		lastex = ((lastp != NULL) ? (lastp - input + 1) : -1);
	}
	// int lastex = strrchr(input, '!') - input + 1;
	printf("First: %d\nLast: %d\n", firstex, lastex);
	char result[length];
	strcpy(result, input);

	for (int c = 0; c < length; ++c)
	{
 		if (lastex >= 0 || c < lastex) 
		{
			if (input[c] >= 'A' && input[c] <= 'Z')
			{
				result[c] = input[c] + 32;
			}
			else if (input[c] >= 'a' && input[c] <= 'Z')
			{
				result[c] = input[c] - 32;
			}
		}
	}
	strcpy(input, result);
}

int main(void)
{
	char input[255];
	scanf("%s", input);
	convert(input);
	printf("Result: %s\n", input);
}
