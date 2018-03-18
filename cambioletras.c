#include <stdio.h>
#include <stdlib.h>
#define TamT 10000
void main() {

	char texto[TamT],letra;
	int i, j ;

	printf("Introduzca un texto.\n");
	gets(texto);
	getchar();
	system("cls");
	for (i = 0; i < TamT;i++) {

		if (texto[i] == 'a' || texto[i] == 'A') {
			texto[i] = '4';
		}
		else if (texto[i] == 'o' || texto[i] == 'O') {
			texto[i] = '0';
		}
		else if (texto[i] == 'e' || texto[i] == 'E') {
			texto[i] = '3';
		}
		else if (texto[i] == 'i' || texto[i] == 'I') {
			texto[i] = '1';
		}
		else if (texto[i] == 'b' || texto[i] == 'B') {
			texto[i] = '8';
		}
		else if (texto[i] == 'z' || texto[i] == 'Z') {
			texto[i] = '7';
		}
		else if (texto[i] == 'q' || texto[i] == 'Q') {
			texto[i] = '9';
		}
		else if (texto[i] == '\0') {
			break;
		}
	}
	for (i=0;i<TamT;i++){
		
		if (texto[i] !=  '\0') {
			letra = texto[i];
			printf("%c", letra);
		}
		else {
			break;
		}
	}
	printf("\n");

	system("pause");
}