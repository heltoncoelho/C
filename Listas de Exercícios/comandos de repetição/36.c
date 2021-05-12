/*Calcule a diferença entre a soma dos quadrados e o quadrado da soma dos primeiros 100 numeros naturais.*/

#include <stdio.h>

int somaDosQuadrados(int n){

	return n*n;
}

int quadradoDaSoma(int n){

	int soma = 0;
	soma+=n;
	return soma;
}

int main(){

	int diferenca, i, resultado, sdq, qds;


	//laço para soma dos quadrados
	for(i=0;i<100;i++){
		sdq += somaDosQuadrados(i);
	}

	printf("Soma dos quadrados: %d",sdq);

	//laço para quadrado da soma
	for(i=0;i<100;i++){
		qds = quadradoDaSoma(i);
	}

	printf("\nQuadrado da soma: %d\n",qds*qds);


	return 0;
}