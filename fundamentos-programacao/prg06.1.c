#include <stdio.h>
#include <math.h> 

/*
Escreva um programa em C que leia três valores reais do teclado e escreva a mediana.
in: 2 5 1 out: 2
*/


// nao esta sendo feita nenhuma validação das entradas!!!

#define FALSE 0
#define TRUE !FALSE

int main(){		
	
	// o enunciado especifica valores REAIS!!
	float x, y, z;
	printf("calculo da mediana\ndigite 3 numeros: ");
	scanf("%f %f %f", &x, &y, &z);

	float a = x-y;
	float b = y-z;
	float c = x-z;

	if( a * b > 0 ) printf("%f\n", y);
	else if( a * c > 0 ) printf("%f\n", z);
	else printf("%f\n", x);

	return FALSE;
}
