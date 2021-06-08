#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
a) Teste o que acontece se usarmos “ ; ”  logo após fechar o parênteses do for.
b) Teste o que acontece se colocarmos mais ou menos de dois “ ; ” entre os parênteses do for.
c) Teste o que acontece se deixarmos uma das clausuras (espaço entre os “ ; ” ) do for vazia.
*/
	int a = 4;

	// a) o comando for é executado logo retornando (pelo corpo ser vazio).
	
	for(int i = 0; i < a; i++);
	printf("teste\n");

	// b) o comando for aceita 3 argumentos e o erro esta associado a estes
	for(;;);												// funciona como um loop infinito
	//for(int i = 0; i < a);				// erro por falta de argumentos
	//for(;int i = 0; i < a; i++);	// erro primeiro argumento vazio
	//for(int i = 0; i < a;; i++);	// erro terceiro argumento vazio
	//for(int i = 0;; i < a; i++);	// erro segundo argumento vazio
	//for(int i = 0; i < a; i++;);	// erro nao ha 4o argumento
	printf("teste\n");

	// c)

	return FALSE;
}
