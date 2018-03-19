//Desarrollador: Gonzalo Sánchez
//Programa que ordena alfabeticamente dos palabras introducidas por el usuario

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char palabra1[30];
	char palabra2[30];

	printf("Introduzca la primera palabra: \n");
	gets(palabra1);
	printf("Introduzca la segunda palabra: \n");
	gets(palabra2);
	
	if (strcmp(palabra1, palabra2)>0)
	{
		printf("1: %s 2: %s\n", palabra2, palabra1);
	}
	else
	{
		printf("1: %s 2: %s\n", palabra1, palabra2);
	}
	

	system("PAUSE");
}
