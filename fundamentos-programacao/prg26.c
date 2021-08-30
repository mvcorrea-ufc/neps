#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa em C que leia uma matriza 3 x 4  
de doubles e em seguida:
a) Imprima esta matriz no formato matricial
b) Imprima a transposta desta matriz
c) Imprima a soma de todas as células
d) Imprima a soma de cada linha
e) Imprima a soma de cada coluna
*/


int main()  {

    const int lin = 3, col = 4;
    double arr[lin][col], linSum[lin] = {0,0,0}, colSum[col] = {0,0,0,0}, sum = 0;

    // entendo o ponto, se houver algum dado na posição dos arrays linSum e colSum
    // esse sera incrementado, situação corrigida, distração :)

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("digite o elemento [%d][%d]", i, j);
            scanf("%lf", &arr[i][j]);

            linSum[i] += arr[i][j];   // soma das linhas
            colSum[j] += arr[i][j];   // soma das colunas
            sum += arr[i][j];         // soma de todos os elementos
        }
    }

    printf("\n\nmatriz no formato matricial\n");
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%.2lf\t", arr[i][j]);
        }
        printf("\n");
    }


    printf("\n\ntransposta desta matriz\n");
    for(int i = 0; i < col; i++){
        for(int j = 0; j < lin; j++){
            printf("%.2lf\t", arr[j][i]);
        }
        printf("\n");
    }


    printf("\n\nsoma de todas as células é: %.2lf\n", sum);


    printf("\n\nsoma de todas as linhas:\n");

    for(int i = 0; i < lin; i++){
        printf("sum lin %d: %.2lf\n", i+1, linSum[i]);
    }


    printf("\n\nsoma de todas as colunas:\n");
    for(int i = 0; i < col; i++){
        printf("sum col %d: %.2lf\n", i+1, colSum[i]);
    }

	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
