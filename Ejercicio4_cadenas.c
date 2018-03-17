#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

	char frase[1000], caracter1, caracter2;
	int r, i, c;

	printf("Introduce una frase: ");
	gets(frase);
	fflush(stdin);

	printf("Ahora introduce una letra para comprobar cuantas veces se repite: ");
	scanf("%c", &caracter1);

	c = caracter1;
	if (c >= 65 && c <= 90) {
		caracter2 = c + 32;
	}
	if (c >= 97 && c <= 122) {
		caracter2 = c - 32;
	}

	for (i = 0, r = 0; frase[i] != '\0'; i++) {
		if (frase[i] == caracter1 || frase[i] == caracter2) {
			r++;
		}
	}

	printf("El caracter %c se repite %d veces.\n", caracter1, r);

	system("pause");
}