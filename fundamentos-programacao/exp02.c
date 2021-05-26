#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

	/* experimento */

	int a = 0;

	/*

	um inteiro é composto por 4 bytes (32bits),
	por ser um signed int os valoras desse podem ser entre (2^32/2) -2,147,483,648 e (2^32/2-1) 2,147,483,647.
	fora desses valores ocorre under/overflow e os valores não são consistentes

	*/

	printf("digite um int: ");
	scanf(" %d", &a);

	return FALSE;
}
