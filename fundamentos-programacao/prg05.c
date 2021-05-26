#include <stdio.h>
#include <math.h> 

/*
Escreva u programa em C que leia uma nota final de uma disciplina, e informa o que ocorreu como saída. 
Se a nota for de 7 à 10, aprovado; se for de 4 à menor que 7, AF e, caso contrário, reprovado.
*/

// nao esta sendo feita nenhuma validação das entradas!!!

#define FALSE 0
#define TRUE !FALSE

int main(){	
	float x;
	printf("digite a nota: ");
	scanf("%f", &x);

	if(x >= 7) printf("aprovado");
	else if(x >= 4) printf("AF");
	else printf("reprovado");

	return FALSE;
}
