#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
Escreva um programa em C que preencha e imprima um vetor de 1000 
posições com a sequência de Fibonacci como no exemplo:
1, 1, 2, 3, 5, 8 ... 

Após imprimir a sequência, imprima a razão entre cada número e o seu 
antecessor (a partir do segundo número, já que o primeiro não possui 
antecessor).
*/	

/*
Penso que com um array de dimensão 1000, tenhamos overflow no tipo.
Somente testei ate o 200 e o unsigned long long (maior tipo no C) 
conseguiu sem problemas.
*/

int main(){
    int x = 0;
    unsigned long long int arr[100] = {1,1};  // 64bits

    for(int i = 2; i < 100; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i = 0; i < 100; i++) 
        printf("%llu ", arr[i]);

    printf("\n\n");

    for(int i = 99; i > 0; i--)
        printf("%llu ", arr[i] - arr[i-1]);

	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
