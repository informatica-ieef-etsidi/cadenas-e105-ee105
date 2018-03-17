//Desarrollador: Ana Dueñas
//Programa que calcula el numero de vocales distintas y en total de una frase 

#include <stdio.h>
void main() {
	
	
	char frase[50];
	int i=0,j=0,k=0,l=0,m=0,n=0; //variables para controlar la repeticion de vocales
	int contador = 0, contador2 = 0; //Variables para contar las vocales que hay que inicializar
	int opcion;
	printf("Programa para calcular el numero de vocales que tiene una frase\n");
	printf("Introduzca su frase\n");
	
	gets(frase);

	
	
	while (frase[i] != '\0'){ //Mientras que no acabe la frase
		switch (frase[i]) { 
		case 'A':
		case 'a':
			contador2 = contador2 + 1;
			if (j == 0) {
				contador = contador + 1;
				
			}
			j = j++;
			break;
		case 'E':
		case 'e':
			contador2 = contador2 + 1;
			if (k == 0) {
				contador = contador + 1;
				
			}
			k = k++;
			break;
		case 'I':
		case 'i':
			contador2 = contador2 + 1;
			if (l == 0) {
				contador = contador + 1;
				
			}
			l = l++;
			break;
		case 'O':
		case 'o':
			contador2 = contador2 + 1;
			if (m == 0) {
				contador = contador + 1;
				
			}
			m = m++;
			break;
		case 'U':
		case 'u':
			contador2 = contador2 + 1;
			if (n == 0) {
				contador = contador + 1;
				
			}
			n = n++;
			break;

		}
		
		i = i++;
	}
	printf("En la frase %s, encontramos  un numero de vocales  de:%d \n", frase, contador2);
	printf("De las cuales son distintas:%d\n", contador);
	printf("Si quiere ver cuantas veces se ha repetido cada vocal introduzca 1\n");
	scanf_s("%d", &opcion);
	if(opcion==1) {
	
		printf("La vocal a se ha repetido %d veces\n", j);
		printf("La vocal e se ha repetido %d veces\n", k);
		printf("La vocal i se ha repetido %d veces\n", l);
		printf("La vocal o se ha repetido %d veces\n", m);
		printf("La vocal u se ha repetido %d veces\n", n);
	
}
	system("pause");
}