/*Ler o valor atual do salário de um funcionário e seu tempo de serviço na empresa. Em seguida calcular o aumento salarial
baseando-se na tabela (pdf)*/

#include <stdio.h>

int main(){

	float salarioAtual;
	int tempoDeServico;

	printf("Entre com o salario do funcionario: ");
	scanf("%f",&salarioAtual);

	printf("Tempo de servico do funcionario na empresa: ");
	scanf("%d",&tempoDeServico);

	if(salarioAtual<=500 && tempoDeServico<1)
		printf("Reajuste de 25 por cento: %.2f\t+Bonus: sem direito",salarioAtual*1.25);
	else if(salarioAtual<=1000 && (tempoDeServico>=1 && tempoDeServico<=3))
		printf("Reajuste de 20 por cento: %.2f\t+Bonus: 100",salarioAtual*1.20);
	else if(salarioAtual<=1500 && (tempoDeServico>=4 && tempoDeServico<=6))
		printf("Reajuste de 15 por cento: %.2f\t+Bonus: 200",salarioAtual*1.15);
	else if(salarioAtual<=2000 && (tempoDeServico>=7 && tempoDeServico<=10))
		printf("Reajuste de 10 por cento: %.2f\t+Bonus: 300",salarioAtual*1.15);
	else if(salarioAtual>2000 && tempoDeServico>10)
		printf("Não se aplica o reajuste\tBonus: 500");
	else
		printf("O funcionario nao tem direito a reajustes ou bonus.");

	printf("\n");
	return 0;
}