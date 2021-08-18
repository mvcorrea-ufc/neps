#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

/*
Utilizando apenas o endereço de uma variável do tipo double, armazenado 
em um ponteiro (sem acessar diretamente a variável), faça a leitura via 
scanf e em seguida imprima este valor via printf.
*/	

int main(){
    double x = 0;
    double* x_ptr = &x;

    scanf("%lf", x_ptr);

    printf("%lf\n", *x_ptr);

	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
