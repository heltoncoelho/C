/*Leia um numero inteiro positivo N e calcule a soma dos N primeiros numeros naturais*/

#include <stdio.h>

int main(){

	int inteiroN = -1;
	int i;
	int soma = 0;

	while(inteiroN == -1){
		printf("Digite um inteiro positivo: ");
		scanf("%d",&inteiroN);
	};

	for(i=0;i<=inteiroN;i++){
		soma += i;
	};

	printf("Soma dos n primeiros numeros naturais ate o numero digitado: %d",soma);

	return 0;
}


