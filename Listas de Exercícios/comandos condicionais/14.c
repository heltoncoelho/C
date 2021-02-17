/*A nota final de um estudante é calculada com base em três avaliações: Trabalho(com peso 2), avaliação semestral(com peso 3) 
e exame final(com peso 5). Mostre se o aluno foi reprovado (media entre 0 e 2,9), em recuperação (média entre 3 e 4.9) ou
se foi aprovado.*/

#include <stdio.h>

int main(){

	float trabalho, avalicaoSemestral, exameFinal, media;

	printf("Nota obtida no trabalho: ");
	scanf("%f",&trabalho);
	printf("Nota obtida na avaliacao semestral: ");
	scanf("%f",&avalicaoSemestral);
	printf("Nota obtida no exame final: ");
	scanf("%f",&exameFinal);

	media = (trabalho*2+avalicaoSemestral*3+exameFinal*5) / 10;

	if(media >= 0 && media <=2.9)
		printf("Reprovado");
	else if (media >= 3 && media <=4.9)
		printf("Recuperacao");
	else
		printf("Aprovado");

	return 0;
}