//EJERCICIO 4


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LETRA 'a'
main()
{
	char frase[1000]="Si los	hechos	no	encajan	en	la	teoría,	cambie	los	hechos. Albert	Eisntein";
	int i=0,cont=0;
	
	
	while (frase[i]!='\0')
	{
		if (frase[i]=='a' || frase[i]=='A' )
			cont++;
		i++;	
		
	}
	printf("Nnumero de veces: %d\n",cont); 
	system("pause");
	
	
}
