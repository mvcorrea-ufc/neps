#include <stdio.h>
#include <math.h> 

/*
Escreva um programa em C que leia três números 'reais' do teclado e escreva como saída o maior valor lido.
*/

// nao esta sendo feita nenhuma validação das entradas!!!

#define FALSE 0
#define TRUE !FALSE

int main(){	
	float x, y, z;
	printf("digite 3 numeros: ");
	scanf("%f %f %f", &x, &y, &z);

	if(x > y) 
		if(x > z) printf("%f", x);
		else printf("%f", z);
	else
		if(y > z) printf("%f", y);
		else printf("%f", z);

	return FALSE;
}
