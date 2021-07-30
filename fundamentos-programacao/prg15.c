#include <stdio.h>
#include <math.h>

/*
Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
linhas do chamado Triangulo de Floyd. 


Exemplo, para n = 6, temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/			


#define FALSE 0
#define TRUE !FALSE

int main(){
	int x = 0, acc = 1;
	scanf("%d", &x);

	for(int y = 1; y<=x; y++){
		for(int z = 1; z<=y; z++)
			printf("%d ", acc++);
		printf("\n");
	}

	return FALSE;
}
