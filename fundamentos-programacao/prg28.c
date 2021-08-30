#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
Escreva um programa que leia um nome com até 100 caracteres e imprime uma saída como no exemplo


Ex.:
ENTRADA: 
matematica

SAÍDA:
matematica
atematica
tematica
ematica
matica
atica
tica
ica
ca
a
*/	

int main()  {
    char arr[100] = {0};

    scanf("%s",arr);
    printf("escreveu: %s\n", arr);

    for(int i = 0; i < 100; i++){
        if(arr[i] == '\0') break; // para não corer as 100 posiçoes do array
        for(int j = 0; j < 100; j++){
            if(arr[j] == '\0') break;
            printf("%c", arr[ i + j ]);
        }
        printf("\n");
    }

	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
