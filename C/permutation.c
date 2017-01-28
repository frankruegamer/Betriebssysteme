#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int charcmp(const void * c1, const void * c2)
{
	return *(char *) c1 - *(char *) c2;
}

void sort(char * str)
{
	qsort(str, strlen(str), sizeof(*str), charcmp);
}

int isPermutation(char * str1, char * str2)
{
	sort(str1);
	sort(str2);
	return strcmp(str1, str2) == 0;
}

int main(int argc, char argv[])
{
	char str1[] = "lagerregal";
	char str2[] = "regallager";
	if (!isPermutation(str1, str2))
	{
		printf("NOT ");
	}
	printf("OK\n");
}
