/*Leia um numero inteiro N e imprima os N primeiros numeros naturais impares.*/

#include <stdio.h>

int main(){

	int n;
	int i;

	printf("Digite um numero inteiro para obter os numeros impares ate o numero digitado: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){

		if(i%2 != 0)
			printf("%d ",i);
	}

	return 0;
}