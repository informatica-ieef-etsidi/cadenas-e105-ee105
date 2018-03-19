//David Thomas
//Este programa cuenta dentro de una cadena cuantos caracteres son letras, numeros y caracteres especiales

#include <stdio.h>
#include <string.h>

#define TAMCADENA 100

void main() {

	char cadena[TAMCADENA];
	int letra = 0, numero = 0, especial = 0;

	printf("Introduce una frase: \n");
	gets(cadena);

	for (int i = 0; i < strlen(cadena); i++) {
		if (65 <= cadena[i] && cadena[i] <= 90 || 97 <= cadena[i] && cadena[i] <= 122) letra++;
		else if (48 <= cadena[i] && cadena[i] <= 57) numero++;
		else especial++;
	}

	printf("La cadena tiene %d letras, %d numeros y %d caracteres especiales \n\n", letra, numero, especial);
	system("PAUSE");
}