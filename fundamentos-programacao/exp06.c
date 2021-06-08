#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
quando testamos a divisao com numeros inteiros:

divisao inteira	6					-> retorna o valor da divisão
divisao fracionaria	2			-> retorna o inteiro mais proximo arrendondando para baixo
divisao menor zero	0			-> retorna o valor zero
divisao por zero					-> retorna erro
divisao por negatvo	0		-> retorna o inteiro mais proximo arrendondando para baixo

quando testamos a divisao com ponto flutuante

divisao inteira	4.909091			-> retorna o valor correto
divisao fracionaria	2.037736	-> retorna o valor correto
divisao menor zero	0.415094	-> retorna o valor correto
divisao por zero	inf					-> retiorna que o numero é indefinido
divisao por negatvo	-1.181818 -> retorna o valor correto

*/


	int a = 0;
	int b = 2;
	int c = 5;
	int d = 12;
	int e = -4;
	
	printf("divisao inteira\t%d\n", d/b); 
	printf("divisao fracionaria\t%d\n", d/c);
	printf("divisao menor zero\t%d\n", b/c);
	printf("divisao por negatvo\t%d\n", e/c);
	printf("divisao por zero\t%d\n", d/a);

/*
	float a1 = 0;
	float b1 = 2.2;
	float c1 = 5.3;
	float d1 = 10.8;
	float e1 = -2.6;
	
	printf("divisao inteira\t%f\n", d1/b1); 
	printf("divisao fracionaria\t%f\n", d1/c1);
	printf("divisao por zero\t%f\n", d1/a1);
	printf("divisao por negatvo\t%f\n", e1/b1);
	printf("divisao menor zero\t%f\n", b1/c1);
*/	
	return FALSE;
}
