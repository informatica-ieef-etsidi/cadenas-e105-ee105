#include <stdio.h>
#define TAMC 100
//este programa dice si una cadena de caracteres introducida por el usuario es palindroma
void main() {

	int i, longitud, j,a;
	char cadena[TAMC];

	printf("Introduce la cadena de caracteres:\n");
	gets(cadena);

	for (i = 0; cadena[i] != '\0'; i++) {
		longitud = i ;
	}
	j = longitud;

	for (i = 0; i <= longitud; i++) {
		if (cadena == ' ') {
			for (a = i + 1; a < longitud; a++) {
				cadena[a - 1] = cadena[a];
			}
		}
	}

	for (i = 0; i < longitud/2; i++) {
		if (cadena[i] != cadena[j - i])
			printf("no es palindromo\n");
		else
			printf("es palindromo\n");
		break;
	}
	system("pause");
}