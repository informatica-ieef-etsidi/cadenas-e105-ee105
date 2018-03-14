//Marcos Velázquez Ruiz
//Programa que calcula las a que hay en una frase dada


#include <stdio.h>

void main() {

	char frase[75] = "Si los hechos	no encajan en la teoría, cambie los hechos. Albert Einstein";
	int i;
	int contador = 0; //Contador para la a, se actualiza en el bucle for

	printf("Si los hechos no encajan en la teoria, cambie los hechos. Albert Einstein\n");
	
	for (i = 0; i <= 75; i++){
		if (frase[i] == 'a' || frase[i] == 'A') { // Para tener en cuenta tanto las a minusculas como las A mayusculas
			contador = contador + 1;
		}
	}
	printf("La frase tiene %d a\n", contador);
	system("pause");




}