//Ignacio De Navascués Cuadros
//(Funciona mejor en el DEV C++)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	struct personas {

		char nombre[50];
		char email[50];
		int mes;
		int ano;

	} contacto1, contacto2;

	printf("\nIntroduzca nombre del contacto 1o: ");
	gets(contacto1.nombre);
	fflush(stdin);
	printf("\nIntroduzca email del contacto 1o: ");
	gets(contacto1.email);
	fflush(stdin);
	printf("\nIntroduzca mes del contacto 1o: ");
	scanf("%d", &contacto1.mes);
	fflush(stdin);
	printf("\nIntroduzca ano del contacto 1o: ");
	scanf("%d", &contacto1.ano);
	fflush(stdin);

	printf("\nIntroduzca nombre del contacto 2o: ");
	gets(contacto2.nombre);
	fflush(stdin);
	printf("\nIntroduzca email del contacto 2o: ");
	gets(contacto2.email);
	fflush(stdin);
	printf("\nIntroduzca mes del contacto 2o: ");
	scanf("%d", &contacto2.mes);
	fflush(stdin);
	printf("\nIntroduzca ano del contacto 2o: ");
	scanf("%d", &contacto2.ano);
	fflush(stdin);


	if (contacto1.ano < contacto2.ano) {

		puts(contacto1.nombre);
		puts(contacto1.email);
		printf("%d", contacto1.mes);
		printf("\n%d", contacto1.ano);

	}
	else if (contacto1.ano == contacto2.ano && contacto1.mes < contacto2.mes) {

		puts(contacto1.nombre);
		puts(contacto1.email);
		printf("%d", contacto1.mes);
		printf("\n%d", contacto1.ano);
	}
	else if (contacto1.ano > contacto2.ano) {

		puts(contacto2.nombre);
		puts(contacto2.email);
		printf("%d", contacto2.mes);
		printf("\n%d", contacto2.ano);
	}
	else if (contacto1.ano == contacto2.ano && contacto1.mes > contacto2.mes) {
		
		printf("\n\n");
		puts(contacto2.nombre);
		puts(contacto2.email);
		printf("%d", contacto2.mes);
		printf("\n%d", contacto2.ano);
	}
	else if (contacto1.ano == contacto2.ano && contacto1.mes == contacto2.mes) {
		printf("\nLos contactos tienen la misma edad\n");
	}


	return 0;
}
