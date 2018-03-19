//Desarrollado por Álvaro Monteagudo Pérez
//Programa para contar el numero de palabras que hay en una frase

#include <stdio.h>
#define TAMF 150

void main() {

	char frase[TAMF];
	int i, numCaracteres=0, palabras = 0;

	printf("Introduce tu frase:\n");
	gets(frase);

	for (i = 0; frase[i] != '\0'; i++) {
		numCaracteres++;
	}

	for (i = 0; i < numCaracteres; i++) {
		if (frase[i] == ' ') {
			palabras++;
		}
	}

	printf("En la frase \"%s\" hay %d palabras\n", frase, palabras + 1);
	system("pause");

	//en la linea 25 utilizo palabras + 1 porque con el for sumo una palabra cada vez
	//que hay un espacio por lo que la palabra final nunca cuenta

}
