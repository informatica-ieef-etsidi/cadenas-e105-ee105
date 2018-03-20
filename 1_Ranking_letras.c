//Alejandro López Guerrero
/*Este programa muestra el número de veces que aparece un caracter en una palabra
 o en una frase y los ordena por ranking del más común al menos común
 */
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#include <stdio.h>
#define string_size 400

struct Caracter {
	char caracter;
	int contador;

};


void main(void) {

	char cadena[string_size],caracter= '\0';
	int i, j, length_string, vector_contador[378];
	struct Caracter vector[378],aux;


	printf("\n\tANALIZADOR\n\n");
	printf("Introduce la palabra o texto para analizar:\n\n>>> ");
	gets(cadena);

	for (i = 0; i < string_size; i++) {
		if (cadena[i] == '\0') {
			length_string = i;  //Con este paso solo evalua posteriormente la parte de la cadena que no esté vacía
			break;
		}
	}

	for (i = 0; i < 243; i++) {
		vector[i].contador = 0;
	}

	for (i = 0; i < length_string; i++) {
		if (((cadena[i] >= 'a') && (cadena[i] <= 'z'))) {  //Para no distinguir entre mayúsculas y minúsculas
			cadena[i] = cadena[i] - 32;
		}
	}

	vector[0].caracter = '\0';

	for (i = 0; i < 243; i++) {
		vector[i].caracter = vector[i-1].caracter + 1;
		for (j = 0; j < length_string; j++) {
			if (cadena[j] == vector[i].caracter) {
				vector[i].contador = vector[i].contador  + 1;
			}
		}
	}


	for (i = 0; i < 243; i++) {
		for (j = i + 1; j < 377; j++) { 
			if (vector[i].contador < vector[j].contador) {
				aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}

	system("cls");
	printf("\n\tRANKING DE CARACTERES\n\n\t____________________\n\t| CARACTER | VECES |\n\t|__________|_______|");
	for (i = 0; i < 243; i++) {
		if (vector[i].contador != 0) {
			if (vector[i].caracter == 32) {
				printf("\n\t| (espacio)|  %d    |", vector[i].contador);
			}
			else
			printf("\n\t|    %c     |  %d    |", vector[i].caracter, vector[i].contador);
		}
	}
	printf("\n\t--------------------\n\n\t");
	system("Pause()");
}