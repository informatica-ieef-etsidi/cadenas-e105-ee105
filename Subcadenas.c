//Programa que pide una cadena de caracteres y te imprime una subcadena entre las posiciones que quieras
//Por Ismael Gómez Pacheco
#include <stdio.h>
void main() {
	int i, f, j, k;
	char cadena[50], subcadena[50];
	printf("Introduce una palabra/frase\n");
	gets(cadena);
	printf("Ahora elige entre la posicion de que 2 caracteres quieres imprimirla\n");
	printf("Inicio: ");
	scanf_s("%d", &i);
	printf("Fin: ");
	scanf_s("%d", &f);
	printf("Tu cadena es: %s\n", cadena);
	printf("Tu cadena entre %d y %d es: ", i, f);
	k = 0;
	for (j = i-1;j < f;j++) {
		subcadena[k] = cadena[j];
		k++;
	}
	for (k = 0;k < 50;k++) {
		if (subcadena[k] == 'Ì') {
			break;
		}
		printf("%c", subcadena[k]);
	}
	printf("\n");
	system("pause");
}