//Nombre : Alfonso Pinto 
//Pasar todo a mayusculas


#include<stdio.h>

void main() {

	char frase[50];
	int dif;
	int i;
	printf("Introduce una frase :\n");
	gets(frase);

	dif = 'A' - 'a';

	i = 0;
	while (frase[i] != 0) {
		if (frase[i] >= 'a'&&'z' >= frase[i]) {
			frase[i] = (frase[i] + dif);
		}
		i++;
	}
	puts(frase);

	system("pause");
}