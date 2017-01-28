#include <stdio.h>
#include <string.h>

void myStrCpy(char *dest, char *src)
{
	while ((*dest++ = *src++) != 0);
}

void main(void)
{
	char a[255];
	strcpy(a, "hello");
	char b[20];
	myStrCpy(b, a);
	printf("%s\n", b);
}
