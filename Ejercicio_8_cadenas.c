//Alejandro López Guerrero
//Este código corresponde al ejercico 8 de cadenas de caracteres

#include <stdio.h>
#define string_size 200


void main(void) {

	char cadena[string_size],aux;
	int i,length_string,k;
	printf("\n\tCOMBINANDO LETRAS\n");
	printf("\nIntroduce una plabra o frase: ");
	gets(cadena);
	printf("\n");
	puts(cadena);
	printf("\n");

	for (i = 0; i < string_size; i++) {
		if (cadena[i] =='\0')
			break;
	}
	length_string = i;

	for (i = 0; i <length_string; i++) {
		aux = cadena[length_string-1];
		for (k = (length_string - 2); k >= 0; k--) {
			cadena[k + 1] = cadena[k];
		}
		cadena[0] = aux;
		
		puts(cadena); 
		printf("\n");
	}
	printf("\n\n ");
	system("Pause()");

}