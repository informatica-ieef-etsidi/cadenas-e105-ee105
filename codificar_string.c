// Paula Arellano
/*Programa que permite codificar una cadena de caracteres. Se sumara una unidad en el codigo ASCII a cada caracter de la 'a' a la 'y',
los numeros no cambiarán y se imprimira la cadena codificada en mayusculas.*/

#include<stdio.h>
void main() {
	char cadena[300];
	int i = 0;

	printf("Introduzca el texto a codificar: \n");
	gets(cadena);

	while (cadena[i] != '\0') { //Pasar de minusculas a mayusculas
		if ((cadena[i] >= 97) && (cadena[i] <= 122)) {
			cadena[i] -= 32;
		}
		i++;
	}

	i = 0;
	while (cadena[i] != '\0') {
		if ((cadena[i] >= 65) && (cadena[i] < 90)) {
			cadena[i]++;	
		}
		i++;
	}

	printf("Texto codificado: \n %s \n", cadena);

	system("PAUSE");
}