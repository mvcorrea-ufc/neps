#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
na situação abaixo o if ira retornar verdadeiro 
para valores diferentes de zero
*/


	int x;
	x = 10;
	if( x ) printf("verdadeiro\n");
	else printf("falso\n");

	return FALSE;
}
