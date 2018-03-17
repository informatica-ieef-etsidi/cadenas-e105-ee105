// Gonzalo Conde Sánchez
// Cuenta las aes que hay en un frase cualquiera introducida 

#include <stdio.h>
#define TAMC 200

void main() {
	char cadena[TAMC];
	int contador = 0, i, longitud = 0;

	printf("Introduce la frase: \n");
	gets(cadena);

	for (i = 0; cadena[i] != '\0'; i++) {
		longitud++;
	}

	for (i = 0; i <= longitud; i++) {
		if (cadena[i] == 'a' || cadena[i] == 'A') {
			contador = contador + 1;
		}
	}
	printf("En la frase introducida hay %d aes.\n", contador);
	system("PAUSE");
}