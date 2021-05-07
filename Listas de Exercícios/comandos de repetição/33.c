/*.Dados N e dois numeros inteiros positivos, i e j, diferentes de 0, imprimir em ordem crescente os N primeiros naturais que são
múltiplos de i ou de j e ou de ambos. Exemplo: Para N = 6, i = 2 e j = 3 a saída devera ser: 0,2,3,4,6,8. */

#include <stdio.h>

int main(){

	int maximo, index, i, j; //n é o limite maximo

	printf("Digite o limite maximo de numeros: ");
	scanf("%d",&maximo);

	printf("Digite o primeiro numero para imprimir seus multiplos: ");
	scanf("%d",&i);

	printf("Digite o segundo numero para imprimir seus multiplos: ");
	scanf("%d",&j);


	for(index=0;index<=maximo;index++){

		if(index%i == 0)
			printf("%d ",index);

		if(index%j == 0 && index%i !=0)	//a segunda condição é necessário para excluir da impressão o multiplo de ambos.
			printf("%d ",index);					
	}	
	
	return 0;

}
