//Ejercicio	2: Introduzca	una	palabra	cualquiera	por teclado	e	imprímala	al	revés.
//Ejemplo:	casa	a asac
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {

	char nombre[1000];
	int i, aux,longitud;
	int j;
	printf("Introduzca el nombre completo.\n");
	gets(nombre);
	longitud=strlen(nombre);

	for (i = 0; i < longitud/2;i++) {
		aux = nombre[i];
		nombre[i] = nombre[longitud - i - 1];
		nombre[longitud - i - 1] = aux;
	}
	
	printf("%s\t", nombre);
	




	system("PAUSE");
}