#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char cad1[50], cad2[50];
	int i = 0, longitud;
	int encontrado = 0;

	printf("Introduzca una cadena\n");
	scanf_s("%s", cad1, 50);
	printf("Introduzca otra cadena\n");
	scanf_s("%s", cad2, 50);

	while (cad1[i] != '\0') {
		if (cad2[0] == cad1[i]) {
			printf("El primer caracter de la cadena2 se encuentra en la posicion %d de la cadena1\n", i + 1);
		}
		else if (cad2[0] != cad1[i]) {
			encontrado++;
		}
		i++;
	}
	
	longitud = strlen(cad1);
	
	if (encontrado == longitud){
		printf("El primer caracter de la cadena2 no ha sido encontrado en la cadena1\n");
	}
	
	system("PAUSE");
}
		