// Desarrollador: Sergio Corredor
#include <stdio.h>
#include <string.h>

void main () {
	int i;
	char frase[200];
	printf("Introduce una frase:");
	gets(frase);
	for (i = 0; i < strlen(frase); i++) {
		if ((frase[i] >= 'A') && (frase[i] <= 'Z'))
			frase[i] += 32;
		else if ((frase[i] >= 'a') && (frase[i] <= 'z'))
			frase[i] -= 32;
		else if (frase[i] == ' ')
			frase[i] == ' ';
		else
			printf("La frase solo puede incluir letras.\n");
	}
	printf("%s", frase);
	system("pause");
}