
#include <stdio.h>

int main(){
	char abecedario[27]; 
	char letra;
	int i;
	for (letra='A', i = 0; letra <='Z'; letra++, i++){
		abecedario[i] = letra;
		
	}
	printf("Las letras EN MAYUSCULAS del abecedario son: %s\n", abecedario);
	i=0;
	for (letra='a', i = 0; letra <='z'; letra++, i++){
		abecedario[i] = letra;
	}
	
	printf("Las letras EN MINUSCULAS del abecedario son: %s", abecedario);
 

 

 


 


 
}
