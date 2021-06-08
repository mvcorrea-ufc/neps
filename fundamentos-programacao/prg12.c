#include <stdio.h>
#include <math.h> 

/*
leia um natural n e escreva quantas divisões inteiras são 
possíveis até atingir o valor zero. Use o operador de acumulação 
de divisão: ‘ \= ‘

Por exemplo, n = 50 --- 25, 12, 6, 3, 1, 0 --- são seis divisões.
*/		


// nao esta sendo feita nenhuma validação das entradas!!!

#define FALSE 0
#define TRUE !FALSE

int main(){			

	int x = 0, y = 0;

	scanf("%d", &x);

	while( x > 0 ){
		printf("%d ", x /= 2);
		y++;
	}

	printf("\n%d\n", y);

	return FALSE;
}
