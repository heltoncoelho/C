/*Receba o salário-base de um funcionário. Calcule e imprima o salário-base sabendo que ele recebe uma
gratificação de 5% sobre o salário base e paga 7% de imposto.*/

/*NOTA DO PROGRAMADOR: há duas formas de se considerar o problema: ele recebeu um aumento efetivo de 2% que é a 
diferença entre o imposto e a gratificação OU ele paga o imposto sobre o salário + gratificação. Vamos adotar 
segunda*/

#include <stdio.h>

int main(){

	float salário_base;

	printf("Salario-base do funcionario: ");
	scanf("%f",&salário_base);

	printf("Valor liquido a receber: %.2f",(salário_base*1.05)*0.93);

	return 0;
}