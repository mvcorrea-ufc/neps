#include <stdio.h>
#include <math.h> 

/*
Crie um programa em C que leia dois valores 'reais' positivos e escreva como saída a média aritmética e geométrica destes valores.
Dica:  use a função sqrt() para calcular a raiz quadrada.
*/

#define FALSE 0
#define TRUE !FALSE

int main(){
	float x, y, arit, geom;
	printf("digite 2 numeros: ");
	scanf("%f %f", &x, &y);
	//scanf("%f", &y);

	arit = (x+y)/2;
	geom = pow(x*y, (float) 1/2);


  printf("media aritmetica: %f\n", arit);
  printf("media geometrica: %f\n", geom);

	return FALSE;
}
