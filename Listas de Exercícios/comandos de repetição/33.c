/*.Dados N e dois numeros inteiros positivos, i e j, diferentes de 0, imprimir em ordem crescente os N primeiros naturais que são
múltiplos de i ou de j e ou de ambos. Exemplo: Para N = 6, i = 2 e j = 3 a saída devera ser: 0,2,3,4,6,8. */

#include <stdio.h>

int main(){

	int n, i, j; //n é o limite maximo

	printf("Digite o limite maximo de numeros: ");
	scanf("%d",&n);

	printf("Digite o primeiro numero parea buscar seus multiplos: ");
	scanf("%d",&i);

	printf("Digite o segundo numero para buscar seus multiplos: ");
	scanf("%d",&j);

	//uma laço for com x%y para encontrar i e j

	return 0;
}