#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa em C que gere 1 milhão de pontos aleatórios pertencentes 
ao conjunto {(x,y) no R² | 0<=x<=1 e 0<=y<=1}, calcule e imprima com duas 
casas de precisão o valor de   4*s/1e6 , onde s é o número de pontos 
gerados cuja distância para a origem (0,0) é menor do que 1.  
Observação, use struct para representar os pontos.
*/	


struct point {
    float x;
    float y;
};

struct point generatePoint(){
    struct point pt;
    pt.x = ((float) rand() / (RAND_MAX));
    pt.y = ((float) rand() / (RAND_MAX));
    return pt;
}

bool distOrigLessThanZero(struct point pt){
    /*
    float x = sqrt(pow(pt.x,2) + pow(pt.y,2));
    bool r = x<1 ? true : false;
    printf("%f %s\t",x, r ? "true" : "false");
    return r;
    */
    return sqrt(pow(pt.x,2) + pow(pt.y,2)) < 1 ? true : false;
}

int main( ){
    srand((unsigned)time(NULL));
    struct point pt;
    int cnt = 0;

    for(int x = 0; x < 1e6; x++){
        pt = generatePoint();
        if(distOrigLessThanZero(pt)) cnt++;
        //printf("> (%f, %f) ", pt.x, pt.y);
        //if(distOrigLessThanZero(pt)){ cnt++; printf("%d\n", cnt);}else{printf("\n");}
    }
    printf("%0.4f", 4*cnt/1e6);
	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
