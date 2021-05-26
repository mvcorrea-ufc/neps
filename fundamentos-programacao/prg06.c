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
	float x, y, z;
	printf("calculo da mediana\ndigite 3 numeros: ");
	scanf("%f %f %f", &x, &y, &z);

	if((x>y && y>z) || (z>y && y>x) ) printf("y %f", y);
	else if((y>x && x>z) || (z>x && x>y)) printf("x %f", x);
	else printf("z %f", z);

	return FALSE;
}
