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
    int size = 0, cp = 0, ci = 0;

    printf("digite o tamanho do array: ");
    scanf("%d", &size);

    int arr[size];    // array temporario

    printf("digite %d valores inteiros:\n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        arr[i] % 2 ? ci++ : cp++; // alloc size
    }

    printf("pares: %d, impares: %d, size: %d\n", cp, ci, size);
    int *ptrPar = malloc(cp * sizeof(int));
    int *ptrImpar = malloc(ci * sizeof(int));

    ci = cp = 0;

    if(ptrPar == NULL || ptrImpar == NULL) exit(0); // testing

    for(int i = 0; i < size; i++){
        if(arr[i] % 2)  ptrImpar[ci++] = arr[i];
        else            ptrPar[cp++] = arr[i];
    }

    printf("\n\nall: ");
    for(int i = 0; i<size; i++) printf("[%d] ", arr[i]);
    printf("\npares: ");
    for(int i = 0; i<cp; i++) printf("%d ", ptrPar[i]);
    printf("\nimpares: ");
    for(int i = 0; i<ci; i++) printf("%d ", ptrImpar[i]);
    printf("\n");

    free(ptrPar); free(ptrImpar);
	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
