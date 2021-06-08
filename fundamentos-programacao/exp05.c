#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
na situação descrita o "if" não tem nada no corpo
e apos a comparaçãoentre os dois inteiros que 
retorna falso não executa comando algum
*/

	
	if( 3 == 2 );
	printf("teste\n");

	return FALSE;
}
