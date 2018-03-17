// Marcos Velazquez Ruiz
// Este programa te pide una frase e imprime cada palabra de esta en una linea distinta

#include <stdio.h>

void main() {

	int i;
	char frase[50];
	char letra;

	printf("Introduce una frase\n");
	gets(frase);

	for (i = 0; i < 50; i++) { //Realizo un bucle leyendo la frase, al leer un espacio en blanco imprime \n, si no, imprime el caracter leido
		if (frase[i] == ' ')
			printf("\n");
		
		else if (frase[i] == '\0') { // Este condicionante lo pongo por que al no escribir una frase suficientemente larga, daba un error extraño
			i = 1000;
		}
		else {
			letra = frase[i]; // Manera para imprimir los caracteres uno a uno de la cadena
			printf("%c", letra,1);
		}
	}
	printf("\n");

	system("pause");
	}