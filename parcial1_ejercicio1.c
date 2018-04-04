
#include <stdio.h>
#include <stdlib.h>
void main() {
	char cadena[50], caracter;
	int i=0, j;
	printf("Introduce una frase\n");
	gets(cadena);
	printf("Introduce el caracter a eliminar\n");
	scanf_s(" %c", &caracter);
	while (cadena[i] != '\0') {
		if (cadena[i] == caracter) {
			j = 0;
			while (cadena[i+j] != '\0') {
				cadena[i + j] = cadena[i + j + 1];
				j++;
			}
			i--;
		}
		i++;
	}
	printf("La frase sin el caracter %c es: %s\n", caracter, cadena);
	system("pause");
}