//David Thomas
//Este programa ordena una clase por nombre usando el algoritmo de la burbuja

#include <stdio.h>
#include <string.h>

#define TAMNOMBRE 100
#define TAMCLASE 30

void main() {

	char nombres[TAMCLASE][TAMNOMBRE];
	char aux[TAMNOMBRE], opcion;
	int numAlumnos;

	printf("Introduce el numero de alumnos que hay en la clase: \n");
	scanf_s("%d", &numAlumnos); getchar();
	printf("Introduce el nombre de los alumnos: \n");
	for (int i = 0; i < numAlumnos; i++) gets(nombres[i]);
	printf("Como quieres ordenar los nombres, en orden alfabetico(introduce a) o al reves(d)");
	scanf_s("%c", &opcion, 1);
	
	for (int i = 1; i < numAlumnos; i++) {
		for (int j = 0; j < (numAlumnos - i); j++) {
			switch (opcion) {
				case'a':
				case'A':
					if (strcmp(nombres[j], nombres[j + 1]) > 0) {
						for (int k = 0; k < TAMNOMBRE; k++) aux[k] = nombres[j][k];
						for (int k = 0; k < TAMNOMBRE; k++)	nombres[j][k] = nombres[j + 1][k];
						for (int k = 0; k < TAMNOMBRE; k++) nombres[j + 1][k] = aux[k];
					} break;
				case'd':
				case'D':
					if (strcmp(nombres[j], nombres[j + 1]) < 0) {
						for (int k = 0; k < TAMNOMBRE; k++) aux[k] = nombres[j][k];
						for (int k = 0; k < TAMNOMBRE; k++)	nombres[j][k] = nombres[j + 1][k];
						for (int k = 0; k < TAMNOMBRE; k++) nombres[j + 1][k] = aux[k];
					} break;
				default:
					printf("Opcion no valida \n\n"); break;
			}
		}
	}

	printf("La lista ordenada de alumnos es: \n");
	for (int i = 0; i < numAlumnos; i++) printf("%s \n", nombres[i]);
	system("PAUSE");
}