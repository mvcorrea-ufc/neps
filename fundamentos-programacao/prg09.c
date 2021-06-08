#include <stdio.h>
#include <math.h> 

/*
Faça um programa que, para um número indeterminado de pessoas: leia a idade de cada
uma, sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir
calcule: o número de pessoas; a idade média do grupo; a menor idade e a maior idade.
*/


// nao esta sendo feita nenhuma validação das entradas!!!

#define FALSE 0
#define TRUE !FALSE

int main(){		
	int acc = -1, avgSum = 0, max = 0, min = 0, in = 0;

	do {
		scanf("%d", &in);

		if(in > max) max = in;
		if((in < min & in != 0) || (min == 0)) min = in;
		avgSum += in;
		acc++;
	} while(in != 0);

	printf("numero de pessoas: %d\n", acc);
	printf("idade media: %f\n", (float) avgSum/acc);
	printf("menor idade: %d\n", min);
	printf("maior idade: %d\n", max);

	return FALSE;
}
