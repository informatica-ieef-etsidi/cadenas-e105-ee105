//Desarrollador: Javier Redondo
//Programa para calcular la letra del DNI

#include <stdio.h>

void main() {
	char letra[24] = { 'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E','\0' };//son las letras listadas en la tabla de correspondencia por orden
	int eleccion, DNI, cociente;
	do {
		printf("Pulse:\n");
		printf("1 para calcular la letra de su DNI\n2 para salir\n");
		scanf_s("%d", &eleccion);
		system("cls");
		switch (eleccion) {
		case 1:
			getchar();
			printf("Introduzca los numeros de su DNI: \n");
			scanf_s("%d", &DNI);
				cociente = DNI % 23;
			printf("La letra de su DNI es: \"%c\"\nSu DNI es %d %c \n\n\n", letra[cociente], DNI, letra[cociente]);
			system("pause");
			system("cls");
			break;
		case 2:
			break;
		}
	} while (eleccion == 1);
}