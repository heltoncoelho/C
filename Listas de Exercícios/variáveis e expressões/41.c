/*Leia o valor da hora de trabalho e o número de horas trabalhadas no mês. Imprima o valor a ser pago com um
adicional de 10%*/

#include <stdio.h>

int main(){

	float horas_trabalhadas, valorHora;

	printf("Numero de horas trabalhadas: ");
	scanf("%f",&horas_trabalhadas);
	printf("Valor da hora: ");
	scanf("%f",&valorHora);

	printf("Valor a receber com adicional de 10%%: %.2f",(horas_trabalhadas*valorHora)*1.10);


	return 0;
}