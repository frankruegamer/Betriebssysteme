#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char firstname[255];
	char lastname[255];
} Person;

void read(char* text, char *var)
{
	printf("%s\n", text);
	scanf("%s", var);
}

void readPerson(Person *p)
{
	read("Bitte Vornamen eingeben:", p->firstname);
	read("Bitte Nachnamen eingeben:", p->lastname);
}

int main()
{
	Person *p = (Person *)malloc(sizeof(Person));
	readPerson(p);
	printf("Die Person ist %s %s.\n", p->firstname, p->lastname);
}
