#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
Teste o que acontece se criarmos dois vetores A e B do mesmo tamanho, e 
tentarmos atribuir  B a A (A = B;)
Se não funcionar, proponha uma forma de atribuir o conteúdo de B à A.
*/

	int a[9] = {0,1,2,3,4,5,6,7,8};
	int b[9];

	// b = a;

/*
não é possivel copiar-se um array a outro, tipo
b = a;
a maneira correta seria copiar elemento a aelmento como demonstrado 
abaixo
*/

	for(int i=0; i<9; i++)
		b[i] = a[i];

	for(int i=0; i<9; i++)	
		printf("%d ",a[i]);
	 printf("\n");


	for(int i=0; i<9; i++)	
		printf("%d ",b[i]);
	 printf("\n");


	return FALSE;
}
