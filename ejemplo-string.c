#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void main() {
	int i, longitud = 0; // longitud de la cadena
	char nombre[100], nombre2[100];

	gets(nombre);
	// calcular la longitud de una cadena
	i = 0;
	while (nombre[i] != '\0') {
		longitud++;
		i++;
	}
	printf("Longitud del nombre es = %d\n", longitud);

	// Utilizando la librería string.h

	longitud = strlen(nombre);
	printf("Longitud del nombre con strlen es = %d\n", longitud);

	// strcpy para copiar de una cadena a otra
	strcpy_s(nombre2, 100, nombre); // nombre 2 es el destino y nombre el origen

	printf("Nombre2: %s\n", nombre2);

	system("pause");
}