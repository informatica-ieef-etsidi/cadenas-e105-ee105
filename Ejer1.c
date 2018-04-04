//Ejercicio parcial 1 2016/2017
//Programa que imprime una frase quitándole un caracter elegido
//Por Ismael Gómez Pacheco

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main() {
	int i, j;
	char cadena[50], caracter;
	printf("Introduce una frase\n");
	gets(cadena);
	printf("Introduce el caracter a eliminar\n");
	scanf("%c", &caracter);
	j = 0;
	for (i = 0; cadena[i]!='\0';i++) {
		if (cadena[i] != caracter) {
			cadena[j] = cadena[i];
			j++;
		}
	}
	cadena[j] = '\0';
	printf("La frase sin el caracter %c es: %s\n", caracter, cadena);
	system("pause");
}