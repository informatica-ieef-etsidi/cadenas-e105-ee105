#include <stdio.h>

void main() {
	// Manera mas incomoda de inicializarlo:
	// char matricula[8] = { '4', '2', '1', '0', 'F', 'F', 'M', '\0' };
	char matricula[8] = "4210FFM";
	char nombre[50];
	int i;
	int contieneA = 0; // variable bandera con valor falso inicialmente

	printf("Matricula: %s\n", matricula);

	printf("Introduzca su nombre\n");
	// scanf_s("%s", nombre, 50);
	gets(nombre);

	printf("Nombre introducido es: %s\n", nombre);

	// Codigo para saber si el nombre contiene una 'a' ó 'A'
	i = 0;
	while (nombre[i] != '\0') {
		if (nombre[i] == 'a' || nombre[i] == 'A') {
			printf("El nombre contiene a\n");
			contieneA = 1; // la pongo a verdadero
			break;
		}
		i++;
	}
	if (contieneA == 0) {
		printf("El nombre no contiene a\n");
	}

	system("PAUSE");
}