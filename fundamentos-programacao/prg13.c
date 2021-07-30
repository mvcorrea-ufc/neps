#include <stdio.h>
#include <math.h> 

/*
Elaborar uma questão de múltipla escolha, de uma disciplina que esteja cursando ou
um tema de interesse, com um enunciado e cinco alternativas, sendo apenas uma correta. 
Escrever um programa que mostra a questão e as opções na tela, pede a resposta
correta e informa ao usuário se ele acertou ou errou.
*/		


#define FALSE 0
#define TRUE !FALSE


int question(){
	int resp = 1, option = 0;
	printf("questão 01: Quem descobriu o caminho para as indias\n\n");

	printf("\topção 1: Vasco da Gama\n");
	printf("\topção 2: Bartolomeu Dias\n");
	printf("\topção 3: Fernão de Magalhaes\n");
	printf("\topção 4: Botafogo\n");
	printf("\topção 5: Fluminense\n\n");

	printf("digite o numero da opção correta! ");
	scanf("%d", &option);

	return (option == resp);
}



int main(){			

	int resp = question();
	if(resp == FALSE){
		printf(" -> opção incorreta\n");	
	}else{
		printf(" -> a opção esta correta\n");
	}

	return FALSE;
}
