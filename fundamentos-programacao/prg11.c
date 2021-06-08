#include <stdio.h>
#include <math.h> 

/*
Leia um natural n e escreva o valor de n! = 1 * 2 * 3 * ... * n . 

Use o acumulador de multiplicação ‘ *= ‘ .

Teste e descreva na forma de comentário qual o maior natural que 
o seu programa foi capaz de calcular o fatorial corretamente
*/


// nao esta sendo feita nenhuma validação das entradas!!!

#define FALSE 0
#define TRUE !FALSE


int fact(unsigned int x){

/*  
utilizando um inteiro natural conseguese o fatorial de 12.
portque o fatorial de 13 ja ultrapassa o valor (2^32)-1
*/


	if( x == 0 ) return 1;
	else return x *= fact( x - 1 );
}	

int main(){			

	unsigned int x = 0;
	printf("tamanho int: %zu bytes\n", sizeof(x));

	scanf("%u", &x);
	printf("\n%u\n", fact(x));

	return FALSE;
}
