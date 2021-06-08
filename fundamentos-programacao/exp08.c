#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
a) Teste o que acontece se usarmos ++ em variáveis não inteiras.
b) Teste o que acontece se usarmos + + (separado): x = 2+ +y
c) Teste o que acontece se colocarmos ++ em uma expressão composta: ++(x+y)
d) Teste o que acontece se colocarmos ++ em um valor literal: ++23
e) Descubra a diferença entre x = 2 * y++; e x = 2 * ++y
*/


	float x, y = 2.0, b = 14.6;


	// a)	é adicionado 1 ao valor de b.
	b++;	
	printf("%f\n", b);

	// b) retorna o valor 2+y ignorando um dos sinais.
	x = 2+ +y;
	printf("%f\n", x);

	// c) a expressao retorna erro.
//	int tmp = ++23;
//	printf("%f\n", tmp);

	// d) 
	x = 2 * y++;
	// o produto é feito antes do incremento da variavel y
	printf("%f\n", x);  // RETORNA 4
	// o produto é feito apos o incremento da variavel y
	x = 2 * ++y;
  printf("%f\n", x);  // RETORNA 8


	return FALSE;
}
