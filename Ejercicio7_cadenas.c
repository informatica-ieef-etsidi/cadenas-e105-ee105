#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char frase[1000];
	int i, c;

	printf("Introduce una frase: ");
	gets(frase);
	fflush(stdin);

	for (i = 0; frase[i] != '\0'; i++) {
		c = frase[i];
		if (c >= 65 && c <= 90) {
			frase[i] = c + 32;
		}
		if (c >= 97 && c <= 122) {
			frase[i] = c - 32;
		}
	}

	printf("Si cambiamos las mayusculas por minusculas y viceversa la frase se convierte en: \n%s\n", frase);

	system("pause");
}