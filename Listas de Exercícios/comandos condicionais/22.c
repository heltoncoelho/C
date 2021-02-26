/*Leia idade e tempo de serviço de um trabalhador. Escreva se ele pode se aposentar. As condições são:
1. ter pelo menos 65 anos
2. ou ter trabalhado pelo menos 30 anos
3. ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos*/

#include <stdio.h>

int main(){

	float idade, tempoDeServico;

	printf("Idade do trabalhador: ");
	scanf("%f",&idade);
	printf("Tempo de Servico: ");
	scanf("%f",&tempoDeServico);


/*O primeiro IF é para evitar duas situações sem lógica, a primeira do tipo idade <= tempo de serviço. A segunda do tipo idade muito
próxima ao tempo de serviço. Por exemplo: idade igual a 31 anos e tempo de serviço igual a 30. Como o tempo de contribuição minimo é 
de 25 anos, o trabalhador deve ter uma diferença igual ou maior a 25 anos entre a idade informada e o tempo de contribuição*/

	if(idade>=tempoDeServico && (idade-tempoDeServico)>=25){ 	//CONTINUA  DANDO ERRO. REVER AMANHA. EX: IDADE 50 TEMPO 30 = ERRO
		if(idade == 65)
			printf("O trabalhador pode se aposentar por idade");
		else if (tempoDeServico >= 30)
			printf("O trabalhador pode se aposentar por tempo de servico");
		else if (idade >=60 && tempoDeServico >= 25)
			printf("O trabalhador pode se aposentar por idade e tempo de servico");
		else
			printf("O trabalhador ainda nao pode se aposentar.");
	}else
		printf("Erro.");

	return 0;
}