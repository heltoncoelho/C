/*Determine os cinco primeiros multiplos de 3, considerando numeros maiores que 0*/

#include <stdio.h>

int main(){

	int indice;	
	int contador = 0;

	for(indice=3;indice<100;indice++){			

			if(indice%3 == 0){	//busca pelos multiplos de 3 (cuja divisão por 3 não tem resto.)
				printf("Multiplo: %d\n",indice);
				contador++;				
			};	


			if(contador == 5)	//quando conseguirmos os 5 primeiros multiplos, saimos do laço FOR
					break;		
	}


	return 0;
}