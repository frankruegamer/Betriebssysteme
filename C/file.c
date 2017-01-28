#include <stdio.h>

int main()
{
	FILE *file = fopen("lorem.txt", "r");
	
	while(1)
	{
		int c = fgetc(file);
		if (feof(file)) break;
		printf("%c", c);
	}
	printf("\n");
	
	char* content;
	fgets(content, file->blksize, file);
	printf("%s\n", content);
}
