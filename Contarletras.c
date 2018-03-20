#include <stdio.h>



void main() {

	char frase[300];
	int tamfrase;
	int i=0, j=0;
	char letra[2];
	int numero=0;
	char opcion='o'; 
	char palabra[40];
	int k = 0;
	int tampalabra;
	int comparador=0;
	

	printf("Introduzca su frase \n");



	gets(frase);


	printf("Seleccione A para contar las veces que se repite una letra\n");
	printf("Seleccione B para contar las veces que se repite una palabra(no funciona)\n");

	scanf_s("%c", &opcion, 1);
	
	if (opcion >= 'a' && opcion <= 'z') {

		opcion -= 32;

	}
	

	while (frase[i] != '\0') {

		i++;

	}
	tamfrase = i;

	printf("Su frase tiene %d letras\n", i);



	switch (opcion)
	{


	case 'A':

	printf("Introduzca la letra que quiere contar las veces que se repite\n");

	scanf_s("%s", &letra,2);



	if (letra[0] >= 'A' && letra[0] <= 'Z') {

		letra[0] += 32;

	}



	for (j=0; j < tamfrase; j++){

	
		if (frase[j] == letra[0]) {

			numero = numero+1;

		}
	
	
	}

	printf("Su frase contiene %d veces la letra %s\n", numero, letra);

	break;

	case 'B':

		printf("Introduzca la palabra que quiere contar las veces que se repite\n");

		scanf_s("%s", &palabra, 40);


		i = 0;
		while (palabra[i] != '\0') {

			i++;

		}
		tampalabra = i;

		printf("Su palabra tiene %d letras\n", i);




		
		numero = 0;
		for (j = 0; j < tamfrase; j++) {


			if (frase[j] == palabra[0]) {


				for (k = 0; k < tampalabra; k++) {

					if (frase[j + k] == palabra[k]) {

						comparador++;
					}

					else {
						break;

					}


				}


				if (comparador == tampalabra) {

					numero = numero + 1;
				}


			}

		}
			printf("Su frase contiene %d veces la palabra %s\n", numero, palabra);

			break;


	default:
		break;
		}

	system("PAUSE");
}