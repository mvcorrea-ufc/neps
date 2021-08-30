#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que leia uma matriz 3x3 de doubles e imprima sua 
determinante.
*/	

void printMatrix(int size, double mat[size][size]){
    int lin = size, col = size;
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%.2lf\t", mat[i][j]);
        }
        printf("\n");
    }
}

double detLaplace(int size, double mat[size][size]){ // recursive inplementation
    double det, cofat;
    int jAux, iAux;

    if( size == 1 ) return mat[0][0]; // caso base 1x1
    else {
        det = 0;
        for(int i = 0; i < size; i++){ 
            if(mat[0][i] != 0){ // salta zero
                double aux[size - 1][size - 1]; // menor complementar
                iAux = 0, jAux = 0;

                for(int row = 1; row < size; row++){
                    for(int col = 0; col < size; col++){
                        if(col != i){ // skip line
                            aux[iAux][jAux] = mat[row][col];
                            jAux++;
                        }
                    }
                    iAux++;
                    jAux = 0;
                }
                cofat = (i % 2 == 0)? mat[0][i] : -mat[0][i];
                // printMatrix(size-1, aux);
                det = det + cofat * detLaplace(size - 1, aux);
            }
        }
        return det;
    }
}



int main()  {
    int lin = 3, col = 3;
    double arr[lin][col];
    double x1[3][3] = {{2,3,4},{5,6,7},{8,9,0}}; // det = 30

/*
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("digite o elemento [%d][%d]", i, j);
            scanf("%lf", &arr[i][j]);
        }
    }
*/
    printMatrix(3, x1);
    printf("\n");
    printf("determinante = %.2lf\n", detLaplace(3, x1));

	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
