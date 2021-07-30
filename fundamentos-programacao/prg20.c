#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
Usando struct para armazenar os dados de entrada, escreva um programa 
que leia duas coordenadas cartesianas do R² e imprima como saída a 
distância Euclidiana entre estes pontos.
*/	


struct point {
    int x;
    int y;
};

void euclidDst(struct point pt1, struct point pt2){
    int x = pt1.x - pt2.x;
    int y = pt1.y - pt2.y;
    int powx = pow(x,2);
    int powy = pow(y,2);

    printf("%f\n", sqrt(powx + powy));
}

int main(){
    struct point pt1,pt2;
    printf("Digite o primeira coordenada:");
    scanf("%d %d", &(pt1.x), &(pt1.y));
    printf("Digite o segunda coordenada:");
    scanf("%d %d", &(pt2.x), &(pt2.y));

    printf("points (%d,%d) (%d,%d)\n", pt1.x, pt1.y, pt2.x, pt2.y);
    euclidDst(pt1, pt2);

	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
