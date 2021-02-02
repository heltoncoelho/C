/*Três amigos jogaram na loteria. Caso ganhem o prêmio deve ser repartido em partes proporcionalmente iguais ao valor
que cada um deles investiu na aposta. Faça um programa que recebe o valor do prêmio e o valor investido por cada apostador,
imprima quanto cada um ganharia.*/


#include <stdio.h>

int main(){

	float apostador_1, apostador_2, apostador_3, premio, constanteProporcional;

	printf("Qual o valor do premio? ");
	scanf("%f",&premio);

	printf("Quando o apostador 1 investiu?");
	scanf("%f",&apostador_1);

	printf("Quando o apostador 2 investiu?");
	scanf("%f",&apostador_2);

	printf("Quando o apostador 3 investiu?");
	scanf("%f",&apostador_3);

	//divisão proporcional

	constanteProporcional = premio / (apostador_1+apostador_2+apostador_3);

	//premio devido a cada apostador
	printf("O apostador 1 recebera: %.2f\n",apostador_1*constanteProporcional);
	printf("O apostador 2 recebera: %.2f\n",apostador_2*constanteProporcional);
	printf("O apostador 3 recebera: %.2f\n",apostador_3*constanteProporcional);


	return 0;
}

