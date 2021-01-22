/*Uma empresa contrata um encanador a $30,00 por dia. Faça um programa que solicite o número de dias trabalhados
e imprima a quantia líquida a ser paga sabendo que são descontados 8% de imposto de renda.*/

#include <stdio.h>

int main(){

	float dias_trabalhados;

	printf("Dias trabalhados: ");
	scanf("%f",&dias_trabalhados);

	printf("Valor a receber: %.2f",dias_trabalhados*0.92);


	return 0;
}