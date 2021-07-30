#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


/*
Usando obrigatoriamente a estrutura de controle switch faça um programa que leia um inteiro qualquer e imprima na tela uma  saída segundo a codificação a baixo:
0 - > domingo
1 - > segunda-feira
2 - > terça-feira
3 - > quarta-feira
4 - > quinta-feira
5 - > sexta-feira
6 - > sábado
qualquer outro valor  - > inválido
*/	

void dayOptions(value){
        switch( value ){
            case 0:
                printf("domingo\n\n");
                return;
            case 1:
                printf("segunda-feira\n\n");
                return;
            case 2:
                printf("terça-feira\n\n");
                return;
            case 3:
                printf("quarta-feira\n\n");
                return;
            case 4:
                printf("quinta-feira\n\n");
                return;
            case 5:
                printf("sexta-feira\n\n");
                return;
            case 6:
                printf("sábado\n\n");
                return;
            default:
                printf("inválido\n\n");
                return;
        }
}

int main(){		
    int value;
    while(true){	
        printf("\nEntrada: ");
        if(scanf("%d", &value) != 1) break; // quits on non number
        dayOptions(value);
    }	
	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
