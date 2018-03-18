//Paula Arellano
//Ejercicio	Realice sus propios programas para suplir a las funciones :

#include <stdio.h>
#include<string.h>

void main() {
	char cadena[100], cadena_copia[100], cadenacat[100], cadena1cmp[100], cadena2cmp[100];
	int i = 0, j, n=0, resultado;

	printf("Introduce una cadena de caracteres: ");
	gets(cadena);

	//srtlen()
	while (cadena[i] != '\0') {
		i++;
	}

	printf("La cadena '%s' tiene %d caracteres \n", cadena, i);

	//strcpy()
	i = 0;
	while (cadena[i] != '\0') {
		cadena_copia[i] = cadena[i];
		i++;
	}
	cadena_copia[i++] = '\0';

	printf("La cadena copia es: %s \n", cadena_copia);

	//strcat()
	printf("Introduce la cadena de caracteres a concatenar: ");
	gets(cadenacat);
	
	i = 0;
	while (cadena[i] != '\0') { //El bucle avanza hasta que cadena ha terminado
		i++;
	}

	j = 0;
	while (cadenacat[j] != '\0') {
		cadena[i] = cadenacat[j];
		j++;
		i++;
	}
	cadena[i++] = '\0';
	printf("La cadena de caracteres resultante es: %s \n\n", cadena);


	//strcmp()
	printf("Introduce la cadena1 de caracteres a comparar: ");
	gets(cadena1cmp);
	printf("Introduce la cadena2 de caracteres a comparar: ");
	gets(cadena2cmp);

	n = 0;
	while (cadena1cmp[n] != '\0') {  //longitud de la cadena
		n++;
	}
	
	i = 0;
	j=0;
	//Opción:cadenas iguales.
	while ((cadena1cmp[i] != '\0')&&(cadena2cmp[i]!='\0')) { 

			if (cadena1cmp[i] == cadena2cmp[i]) {
				resultado = 1;
				break;
			}
			else if (cadena1cmp[i] == cadena2cmp[n - 1]) {
				resultado = -1;
				break;
			}
			else if(cadena1cmp[i] == cadena2cmp[i]){ 
				j++;//Cuenta las veces que son iguales.
			}
		i++;
		n--;
	}

	if (j==i)//si j se suma todas las veces que i entra al último else-if, y es para todas las posiciones,entonces las cadenas son iguales.
		printf("Las cadenas son iguales. \n");
	else if (resultado == 1)
		printf("Orden ascendente. \n"); 
	else if (resultado == -1)
		printf("Orden descendente. \n");

	system("PAUSE");
}
