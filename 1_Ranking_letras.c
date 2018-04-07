//Alejandro López Guerrero
/*Este programa muestra el número de veces que aparece un caracter en una palabra
 o texto y los ordena por ranking del más al menos común */

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <string.h>
#define MAX_LONG_TEXTO 400 //Longitud máxima del texto a introducir por el ususario
#define ASCII 255 //Total de caracteres distintos en la tabla ASCII

struct Caracter {
	char caracter;
	int contador;
};

void main(void) {

	struct Caracter vector[ASCII]; //En este vector se almacenarán todos los caracteres posibles y las veces presentes en el texto
	struct Caracter aux;
	char cadena[MAX_LONG_TEXTO], caracter;
	int i, j, long_texto;
	
	printf("\n\tANALIZADOR\n\n");
	printf("Introduce la palabra o texto para analizar:\n\n>>> ");
	gets(cadena);
	_strupr(cadena);
	long_texto = strlen(cadena);
	
	//En el siguiente for inicializo todos los caracteres con la variable contador a 0.
	for (i = 0; i < ASCII; i++) {
		vector[i].contador = 0;
	}
	
	vector[0].caracter = '\0';
	/*En el siguiente bucle comparo cada caracter de la tabla ASCII con cada caracter del texto. Si en algún momento 
	coinciden estos caracteres, la variable contador aumenta en una unidad*/
	for (i = 1; i < ASCII; i++) {
		vector[i].caracter = vector[i-1].caracter + 1;
		for (j = 0; j < long_texto; j++) {
			if (cadena[j] == vector[i].caracter) {
				vector[i].contador = vector[i].contador  + 1;
			}
		}
	}
	/*Ordeno dentro del vector de estructura Caracter de mayor a menor. 
	Este es el algoritmo de la burbjuja aplicado a vectores de estructuras*/
	for (i = 0; i < ASCII; i++) {
		for (j = i + 1; j < ASCII; j++) { 
			if (vector[i].contador < vector[j].contador) {//Comparación de la variable contador entre varios caracteres
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}

	system("cls");
	printf("\n\tRANKING DE CARACTERES\n\n\t____________________\n\t| CARACTER | VECES |\n\t|__________|_______|");
	
	/*Ahora imprimo por pantalla sólo los caracteres con la variable contador distinta de 0.
	El vector ya está ordenado de mayor a menor*/
	for (i = 0; i < ASCII; i++) {
		if (vector[i].contador != 0) {
			if (vector[i].caracter == 32) {//32 corresponde al caracter del espacio en ASCII
				printf("\n\t| (espacio)|  %d    |", vector[i].contador);
			}
			else
			printf("\n\t|    %c     |  %d    |", vector[i].caracter, vector[i].contador);
		}
	}
	printf("\n\t--------------------\n\n\t");
	system("Pause()");
}
