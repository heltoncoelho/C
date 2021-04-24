/*Declare um inteiro inicializando-o com 0. Incremente-o de 1k em 1k até somar o total de 100k. Imprima na tela.*/

#include <stdio.h>

int main(){

	int hPLovecraft = 0;

	while(hPLovecraft != 100000){		
		hPLovecraft += 1000;
		printf("%d\n",hPLovecraft);
	}

	return 0;
}