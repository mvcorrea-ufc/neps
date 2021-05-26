#include <stdio.h>
#include <math.h> 

/*
Escreva um programa em C que leia dois números 'reais' e mostra na tela uma mensagem indicando qual é o maior valor, ou se são iguais.
*/

#define FALSE 0
#define TRUE !FALSE

int main(){
	float x, y;
	printf("digite 2 numeros: ");
	scanf("%f %f", &x, &y);

	if(x > y) printf("%f eh o maior", x);
	else if(x == y) printf("os numeros sao iguais");
	else printf("%f eh o maior", y);

	return FALSE;
}
