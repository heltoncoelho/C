//Ler comprimento e largura de um terreno, além do preço do metro de tela. Calcular o custo para cercar o terreno.

#include <stdio.h>

int main(){

	float comprimento,largura,precoTela;

	printf("Comprimento do terreno: ");
	scanf("%f",&comprimento);

	printf("Largura do terreno: ");
	scanf("%f",&largura);

	printf("Preco do metro de tela: ");
	scanf("%f",&precoTela);

	printf("Custo a pagar: %.2f",precoTela*(2*comprimento+2*largura));


	return 0;
}