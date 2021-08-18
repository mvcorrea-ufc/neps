#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
Teste o que acontece se usarmos valores não inteiros como índice de um 
vetor
*/

	int a[9] = {0,1,2,3,4,5,6,7,8};

/*
O experimento nos retorna erro, pois não é possivel indexar um array 
com não inteiros.

error: array subscript is not an integer
*/
	
	printf("%d\n",a[1.5]);


	return FALSE;
}
