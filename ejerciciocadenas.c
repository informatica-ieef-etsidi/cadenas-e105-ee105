//Ejercicio que consiste en elimnar una letra cualquiera de cualquier palabra
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char letra, palabra[60];
	int i, j;

	printf("Letra:\n");
	scanf("%c", &letra);
	
	printf("Introduzca la palabra: ");
	scanf("%s", &palabra);

	i = 0;
	while (palabra[i] != '\0') { //sustituimos la palabra por '*'
		if (palabra[i] == letra) {
			palabra[i] = '*';
		}
		i++;
	}
	printf("palabra: %s\n", palabra);

	i = 0;
	j = 0;

	while (palabra[i] != '\0') {
		palabra[i] = palabra[j];
		if (palabra[i] != '*')
			i++;
		j++;
	}
	printf("palabra: %s\n", palabra);
}

	
	
