#include <stdio.h>
#include <math.h> 

/*
Se listarmos todos os números naturais abaixo de 10 que são múltiplos de 3 ou  de 5,
nós teremos: 3, 5, 6 e 9. A soma destes números é 23.
Escreva um programa que calcule a soma de todos os naturais múltiplos de 3 ou de 5 que sejam menores que 1.000.000.
*/			


#define FALSE 0
#define TRUE !FALSE

int mul3or5(int var){
	return var%5 == 0 || var%3 == 0;
}		

// se somarmos tudo a soma seria 10^6 * 10^6 = 10^12
// a variavel unsign long long tem tamanho de 2^64 em magnitude 10^19
// se nao coubesse teriamos de trabalhar com strings para represenetar inteiros

int main(){
	unsigned long long acc = 0;			// 2^64
	for(int i = 1000000; i>0; i--)	// inclusive 1000000
		if(mul3or5(i)) acc += i;
	printf("%llu", acc);
	return FALSE;
}
