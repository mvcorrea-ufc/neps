#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
Declare um ponteiro, atribua a ele um valor numérico qualquer, em 
seguida altere o conteúdo deste ponteiro. 
Ocorre algum erro? O que poderia acontecer de errado?
*/

	int x = 5, *y;
	y = &x;		// passando um endereço a um ponteiro

	printf("%d\n",*y);	/// outputs 5

	x = 6;		// o apontador passa a estar apontando para o endeceço de x
						// que agora tem o valor 6

	printf("%d\n",*y);	/// outputs 6

	*y = 7;		// iremos mudar o valor do endereço apontado por y

	printf("%d\n",*y);	/// outputs 7
	
	return FALSE;
}
