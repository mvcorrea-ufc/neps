#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
Escreva um programa em C que leia do usuário um valor inteiro n , em 
seguida, leia n valores inteiros quaisquer. Por fim, o programa deve 
alocar dinamicamente, sem desperdício de memória, dois vetores A e B, 
e preencher o vetor A com os valores pares e B com os valores impares 
digitados anteriormente pelo usuário.
*/	


int main()  {
    int size = 0, countPar = 0, countImpar = 0, cp = 0, ci = 0;

    printf("digite o tamanho do array: ");
    scanf("%d", &size);

    int arr[size];  
    // no encunciado não disse que nao poderia por os valores em um 
    // array temporario poderia sempre utilizar o realloc.

    printf("digite %d valores inteiros:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        arr[i] % 2 ? countImpar++ : countPar++; // alloc size
    }

    printf("countPar: %d, countImpar: %d, size: %d\n\n", countPar, countImpar, size);
    int *ptrPar = malloc(countPar * sizeof(int));
    int *ptrImpar = malloc(countImpar * sizeof(int));

    if(ptrPar == NULL || ptrImpar == NULL) exit(0); // testing

    for(int i = 0; i < size; i++){
        if(arr[i] % 2)  ptrImpar[ci++] = arr[i];
        else            ptrPar[cp++] = arr[i];
    }

    printf("\nall: ");
    for(int i = 0; i<size; i++) printf("[%d] ", arr[i]);
    printf("\npares: ");
    for(int i = 0; i<countPar; i++) printf("%d ", ptrPar[i]);
    printf("\nimpares: ");
    for(int i = 0; i<countImpar; i++) printf("%d ", ptrImpar[i]);
    printf("\n");

    free(ptrPar); free(ptrImpar);
	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
