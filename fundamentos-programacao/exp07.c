#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
usando o codigo abaixo, ao ser executado o while,
o programa nunca saira do mesmo, nao executando 
o segundo printf, pelo fato do teste do while ser sempre
verdade..

so é possivel sair abortando o programa com control+c
*/

	int a = 1;
	
	printf("antes\n");
	//while( 1 ); // loop infinito
	while( a < 4 ); // loop infinito
	printf("depois\n");

	return FALSE;
}
