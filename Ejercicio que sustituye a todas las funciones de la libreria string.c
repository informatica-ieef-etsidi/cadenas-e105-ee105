#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

void main() {

	char cadena[20], copia[20], cadena2[20], frase[40];
	int longitud1, longitud2, i, c1, c2, c3, c4, c5, aux;

	printf("Introduce una palabra: ");
	scanf("%s", cadena);
	printf("Introduce una palabra: ");
	scanf("%s", cadena2);

	//Funcion que sustituye a strlen()
	for (longitud1 = 0; cadena[longitud1] != '\0'; longitud1++);
	for (longitud2 = 0; cadena2[longitud2] != '\0'; longitud2++);

	printf("Longitud de la cadena 1 = %d\n", longitud1);
	printf("Longitud de la cadena 2 = %d\n\n", longitud2);

	//Funcion que sustituye a strcpy()
	for (i = 0; i < longitud1; i++) {
		copia[i] = cadena[i];
	}
	copia[longitud1] = '\0';

	printf("Copia de la cadena 1 en otra = %s\n\n", copia);

	//Funcion que sustituye a strcat()
	for (i = 0; i < longitud1; i++) {
		frase[i] = cadena[i];
	}
	frase[longitud1] = ' ';
	for (i = longitud1 + 1; i < longitud1 + 1 + longitud2; i++) {
		frase[i] = cadena2[i - longitud1 - 1];
	}
	frase[longitud1 + longitud2 + 1] = '\0';

	printf("Frase = %s\n\n", frase);

	//Funcion que sustituye a strcmp()
	for (c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, i = 0; i < longitud1 + longitud2 + 1; i++) {
		if (cadena[i] != copia[i]) {
			c1 = 1;
		}
		if (cadena[i] != frase[i]) {
			c2 = 1;
		}
		if (cadena2[i] != copia[i]) {
			c3 = 1;
		}
		if (cadena2[i] != frase[i]) {
			c4 = 1;
		}
		if (cadena[i] != cadena2[i]) {
			c5 = 1;
		}
	}

	if (c1 == 0) {
		printf("Las cadenas cadena y copia son iguales.\n");
	}
	if (c1 == 1) {
		printf("Las cadenas cadena y copia no son iguales.\n");
	}
	if (c2 == 0) {
		printf("Las cadenas cadena y frase son iguales.\n");
	}
	if (c2 == 1) {
		printf("Las cadenas cadena y frase no son iguales.\n");
	}
	if (c3 == 0) {
		printf("Las cadenas cadena2 y copia son iguales.\n");
	}
	if (c3 == 1) {
		printf("Las cadenas cadena2 y copia no son iguales.\n");
	}
	if (c4 == 0) {
		printf("Las cadenas cadena2 y frase son iguales.\n");
	}
	if (c4 == 1) {
		printf("Las cadenas cadena2 y frase no son iguales.\n");
	}
	if (c5 == 0) {
		printf("Las cadenas cadena y cadena2 son iguales.\n\n");
	}
	if (c5 == 1) {
		printf("Las cadenas cadena y cadena2 no son iguales.\n\n");
	}

	//Funcion que sustituye a _strupr()
	for (i = 0; i < longitud1 + longitud2 + 1; i++) {
		aux = frase[i];

		if (aux >= 97 && aux <= 122) {
			frase[i] = aux - 32;
		}
	}

	printf("La frase escrita todo en mayusculas es: %s\n\n", frase);

	//Funcion contraria a _strupr()
	for (i = 0; i < longitud1 + longitud2 + 1; i++) {
		aux = frase[i];

		if (aux >= 65 && aux <= 90) {
			frase[i] = aux + 32;
		}
	}

	printf("La frase escrita todo en mayusculas es: %s\n\n", frase);

	system("pause");
}