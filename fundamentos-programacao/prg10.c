#include <stdio.h>
#include <math.h> 

/*
Construa um programa em C que leia dois naturais e calcule o 
produto através de somas sucessivas (sem usar o operador * ).
*/


// nao esta sendo feita nenhuma validação das entradas!!!

#define FALSE 0
#define TRUE !FALSE


int prdRec(int x, int y){ // implementação recursiva bem simples
	if(x < 1 || y < 1) return 0;  // teste mult zero
	if( y == 1 ) return x;
	else return x + prdRec( x, y - 1 );
}	

int main(){			
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("\n%d\n", (x > y) ? prdRec(x, y) : prdRec(y, x));
	return FALSE;
}
