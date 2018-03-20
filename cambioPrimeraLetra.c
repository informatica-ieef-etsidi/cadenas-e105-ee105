//Desarrollador: Sandra Ures
//Programa que pone en mayuscula la primera letra de cada palabra

#include <stdio.h>

void main() {
	char nombre[100];
	int i;

	printf("Introduce tu nombre y apellidos\n");
	gets(nombre);

	if (nombre[0] >= 'a' && nombre[0] <= 'z') {
		nombre[0] -= 32;
	}
	i = 1;
	while (nombre[i] != '\0') {
		if (nombre[i] == ' ') {
			if (nombre[i+1] >= 'a' && nombre[i+1] <= 'z') {
				nombre[i + 1] -= 32;
			}
		}

		i++;
	}

	printf("el nombre es:%s\n", nombre);

	system("pause");
}