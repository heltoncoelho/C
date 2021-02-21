//Mostre as 4 operações básicas ao usuário, ele escolhe uma delas e dois números e depois o programa faz o cálculo.

#include<stdio.h>

int main(){

	float numeroA, numeroB;
	int opcao;

	printf("Digite 1 para somar, 2 para subtrair, 3 para multiplicar e 4 para dividir\n");
	scanf("%d",&opcao);
	printf("Agora digite os dois numeros para a operação");
	printf("\nPrimeiro numero: ");
	scanf("%f",&numeroA);
	printf("Segundo numero: ");
	scanf("%f",&numeroB);

	switch(opcao){
		case 1: printf("Soma: %.2f",numeroA+numeroB);break;
		case 2:	printf("Subtracao: %.2f",numeroA-numeroB);break;
		case 3:	printf("Multiplicacao: %.2f",numeroA*numeroB);break;
		case 4:	printf("Divisao: %.2f",numeroA/numeroB);break;
		default: printf("Erro!");
	};

	return 0;
}