/*Calcule a media ponderada das notas de 3 provas. As provas 1 e 2 tem peso 1, a prova 3 tem peso 2. Ao final mostrar a media
do aluno e indicar se foi aprovado ou reprovado. A nota para aprovação é igual ou maior que 60*/

#include <stdio.h>

int main(){

	float prova1, prova2, prova3, mediaPonderada;

	printf("Nota da prova 1: ");
	scanf("%f",&prova1);
	printf("Nota da prova 2: ");
	scanf("%f",&prova2);
	printf("Nota da prova 3: ");
	scanf("%f",&prova3);

	mediaPonderada = (prova1*1+prova2*1+prova3*2) / 4;

	if(mediaPonderada>=60)
		printf("Media:%.2f\nResultado: aprovado",mediaPonderada);
	else
		printf("Reprovado");


	return 0;
}