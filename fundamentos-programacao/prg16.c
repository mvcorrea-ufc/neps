#include <stdio.h>
#include <stdbool.h>


/*
Escreva um programa em C que leia e valide uma entrada no formato hh:mm:ss e, como saída, imprima a quantidade total de segundos. O programa deve exigir que o usuário redigite caso a entrada não esteja no formato válido, sem fechar o programa.
Atenção, também considere os seguintes limites:  horas devem ser maior ou igual a zero, minutos e segundos devem ser maior ou igual a zero e menor que 60.

Exemplo com o usuário passando uma  entrada válida :
ENTRADA:    12:20:33
SAÍDA:     44433 segundos      
*/			


/*
Professor,
Tenho alguma duvida quanto o que pode ser usado nos programinhas.
Não tenho ideia quais exercicios estão associados a quais videos e 
quais recursos podem ser utilizados em cada programinha?
Apontadores? estruturas? ja podem ser usados?
Tenho tentado fazer tudo com "char arrays"!
Obrigado,
*/


int main(){		

	char input[] = ""; // string representando a hora
	int hrs = -1, mins = -1, secs = -1, seconds = 0;

	while(true){	
		bool err = false;
		printf("\nEntrada: ");
		gets(input); // unsafe
		sscanf(input, "%d:%d:%d", &hrs, &mins, &secs);

		printf("%s > %d:%d:%d\n", input, hrs, mins, secs);
		if(hrs >= 0 && mins >= 0 && secs >= 0) {
			if(mins > 59 || secs > 59) err = true;
			seconds = hrs*3600+mins*60+secs;
		} else err = true;

		if(!err) printf("\nSaida: %d seconds\n", seconds);
		else printf("\nSaida: formato invalido, digite novamente\n");
		hrs = -1, mins = -1, secs = -1, seconds = 0;
	}	

	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
