#include <stdio.h>
#define N 500
/*Ejercicio	5: Realice	un	programa	que	cambia	los	espacios	en	blanco	por	“	_”	en	la	frase: “Sería	
posible	describir	todo	científicamente,	pero	no	tendría	ningún	sentido;	carecería	de	significado	
el	 que	 usted	 describiera	 a	 la	 sinfonía	 de	 Beethoven	 como	 una	 variación	 de	 la	 presión	 de	 la	
onda	auditiva”.	
.*/
void main() {
	char frase[N] = ("Seria posible describir todo cientificamente pero no tendria ningun sentido careceria de significado el que usted describiera a la sinfonia de Beethoven como una variacion de la presion de la onda auditiva");
	int i;
	i = 0;
	while (frase[i] != '\0') {//Bucle hasta la ultima letra de la frase
		if (frase[i] == ' ') {//si el caracter espacio se encuentra en la posición i,lo sustituye por '_'
		   
	            frase[i] = '_';
		}
		i++;
	}
	printf("%s", frase);
	system("PAUSE");
}
