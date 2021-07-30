#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

/*
Faça um programa que gera 100.000 números inteiros de 1 a 6 (inclusive) e 
conte e imprima quantas vezes o valor gerado foi menor ou igual a 3. 

Dicas:
.não imprima todos os valores gerados
.teste com quantidades pequenas antes de testar com 100.000
*/	


int main(){		
    int val = 0, cnt = 0, size= 100000;

    srand((unsigned)time(NULL)); 
    for(int i = 0; i < size; i++){
        val = (rand()%6)+1;
        if( val <= 3 ) cnt++;
        //printf("> %d\n", val);
    }
    printf("%d > %d\n", size, cnt);
	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
