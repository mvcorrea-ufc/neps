#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main(){

/*
Teste o que acontece se tentarmos usar uma posição maior ou igual ao 
tamanho do vetor. Tem alguma coisa errada com isto?
Teste o que acontece se tentarmos usar uma posição negativa de um vetor. 
Tem alguma coisa errada com isto?
*/

	int a[9] = {0,1,2,3,4,5,6,7,8};

/*
Não temos erro ao indexar para alem do tamano do array, no entanto não
conseguimos prever o resultado (sera retornado o conteudo daquela 
posição de memoria, conteudo que normalmente não tem sentido)
*/
	
	for(int i = 0; i < 11; i++) // 2 posições fora do array
		printf("%d\n",a[i]);


	return FALSE;
}
