#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


/*
Escreva um programa em C que leia um  valor inteiro referente a um intervalo em segundos e imprima o mesmo intervalo no formato hh:mm:ss.
Lembre-se: horas devem ser maior ou igual a zero, minutos e segundos devem ser maior ou igual a zero e menor que 60.
Dica: use a operação de resto da divisão " %  "

Exemplo:
ENTRADA:     44433

SAÍDA:    12:20:33
*/			

int onlyDigits(char *s) {
    while (*s) if(isdigit(*s++) == 0) return 0;
    return 1;
}

int main(){		

	char input[] = ""; // string representando os segundos
	int value = -1, tmp = -1, hrs = -1, mins = -1, secs = -1;

	while(true){	
		bool err = false;
		printf("\nEntrada: ");
		gets(input); // unsafe

        if(onlyDigits(input)){
            value = atoi(input);
            //printf("%s > %d\n", input, value);
            hrs = value / 3600;
            tmp = value % 3600;
            mins = tmp / 60;
            secs = tmp % 60;
        } else err = true;

        if(!err) printf("\nSaida: %02d:%02d:%02d\n", hrs, mins, secs);
        else printf("\nSaida: formato invalido, digite novamente\n");
    }	

	return false;
}

/* vim: set ai et ts=4 sw=4 ft=c nu: */
