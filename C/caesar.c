#include <stdio.h>

const char* shiftText()
{
	
}

int main()
{
	const int move = 3;
	char text[255];
	printf("Bitte Text eingeben:\n");
	fgets(text, sizeof(text), stdin);
	printf("Eingegebener Text: %s", text);
}
