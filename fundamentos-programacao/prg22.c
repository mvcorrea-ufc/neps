#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
Crie um programa que ler 1000  números reais e calcula o desvio padrão 
deste conjunto.

desvio padrao = sqrt(variancia)
variancia = SUM((val-media)^2)/tamanho:
*/	


double average(double in[], int len){ // media aritmetica dos itens
    double out = 0;
    for(int i = 0; i < len; i++) out += in[i];
    return out/len;
} 

void printFltArr(double in[], int len){
    for(int i = 0; i < len; i++) printf("%lf ", in[i]);
    printf("\n");
}

int main(){
    int len = 1000; // testado com 10 elementos
    double avg = 0, vari = 0, dpsum = 0;
    double arr[len];

    printf("digite %d numeros\n", len);
    for(int i = 0; i < len; i++) scanf("%lf", &arr[i]);
    //printFltArr(arr, len);

    avg = average(arr, len);
    printf("media: %lf\n", avg);
    for(int i = 0; i < len; i++) dpsum += pow((arr[i] - avg), 2);
    vari = dpsum/len; // variancia
    printf("desvio padrao: %lf\n", sqrt(vari));

	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
