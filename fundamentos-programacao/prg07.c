#include <stdio.h>
#include <math.h> 

/*

*/


// nao esta sendo feita nenhuma validação das entradas!!!

#define FALSE 0
#define TRUE !FALSE

int main(){		
	
	float a, b, c, d, e, f, res;	
	printf("calculo (a+(b/c))/(d-(e/f)) \ndigite 6 numeros: ");
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
	res = (a+(b/c))/(d-(e/f));

	printf("%f\n", res);
	
	return FALSE;
}
