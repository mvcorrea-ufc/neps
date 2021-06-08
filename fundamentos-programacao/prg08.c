#include <stdio.h>
#include <math.h> 

/*
Escreva um programa em C que calcula e imprime os valores das seguintes expressões :
a) 1 / 2 (divisão real)
b) 1 DIV 2 (divisão inteira)
c) 1 MOD 2 (resto da divisão)
d) ( 200 DIV 10 ) MOD 4
e) 5² + 3
*/


// nao esta sendo feita nenhuma validação das entradas!!!

#define FALSE 0
#define TRUE !FALSE

int main(){		

	// a)
	float a = 1.0 / 2.0;
	printf("%f\n", a);

	// b)
	int b = 1 / 2;
	printf("%d\n", b);

	// c)
	int c = 1 % 2;
	printf("%d\n", c);

	// d)
	int d = ( 100 / 10 ) % 4;
	printf("%d\n", d);

	// e) usando o math.h
	int e = pow(5,2) + 3;
	printf("%d\n", e);

	return FALSE;
}
