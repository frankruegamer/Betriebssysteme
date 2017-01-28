#include <stdio.h>

typedef struct
{
	char filename[255];
	unsigned long size;
	unsigned long modified;
	char owner[255];
	int permission;
} File;

void printFile(File file)
{
	printf("Filename: %s", file.filename);
}

int main()
{

}
