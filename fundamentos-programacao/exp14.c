#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
E possível acessar o endereço de um ponteiro e guardá-lo em outro 
ponteiro? Se possível, mostre como.
*/

	int x = 5, *y, **z;	// para isso precisamos mais um nivel de referencia
	y = &x;		// passando um endereço a um ponteiro

	printf("%p > %d\n", y, *y);	/// outputs 5

	z = &y;		//  copiando o ponteiro

	printf("%p > %p\n", &z, *z);	/// a variavel z tem o endereço de y
	printf("%d\n", **z);	/// outputs 5

	
	return FALSE;
}
