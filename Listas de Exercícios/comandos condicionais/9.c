//Leia o salario e o valor de uma prestação de emprestimo. Se a prestação for > 20% do salário, imprimir "Não concedido".

#include <stdio.h>

int main(){

	float salario, prestacaoEmprestimo;

	printf("Salario: ");
	scanf("%f",&salario);

	printf("Valor de uma prestacao do emprestimo: ");
	scanf("%f",&prestacaoEmprestimo);

	if(prestacaoEmprestimo > (salario/100)*20)
		printf("Emprestimo nao concedido");
	else
		printf("Emprestimo concedido");


	return 0;
}