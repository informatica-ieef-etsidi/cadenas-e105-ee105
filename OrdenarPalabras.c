//Desarrollador: Marta Vinagre Teba
//Al escribir un numero determinado de palabras te dice cual de ellas tiene mayor longitud

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMP 50

void main() {
	char palabra1[TAMP];
	char palabra2[TAMP];
	int i;
	int longitud1;
	int longitud2;

	printf_s("Introduce una palabra\n");
	gets(palabra1);

	printf_s("Introduce otra palabra\n");
	gets(palabra2);
	
	longitud1 = strlen(palabra1);
	longitud2 = strlen(palabra2);

	if (longitud1 > longitud2) {
		printf_s("La palabra %s tiene mayor longitud\n", palabra1);
	}
	else if (longitud1 < longitud2) {
		printf_s("La palabra %s tiene mayor longitud\n", palabra2);
	}
	else {
		printf_s("Ambas palabras tienen la misma longitud\n");
	}
	
	system("PAUSE");
}