/*Leia a nota e o número de faltas de um aluno e escreva o seu conceito baseado na tabela (pdf)*/

#include <stdio.h>

int main(){

	float nota;
	int faltas;

	printf("Nota do aluno: ");
	scanf("%f",&nota);

	printf("Numero de faltas do aluno: ");
	scanf("%d",&faltas);

	if(nota>=9 && nota<=10){
		if (faltas<=20)
			printf("Conceito A");
		else
			printf("Conceito B");
	};

	if(nota>=7.5 && nota<=8.9){
		if (faltas<=20)
			printf("Conceito B");
		else
			printf("Conceito C");
	};

	if(nota>=5 && nota<=7.4){
		if (faltas<=20)
			printf("Conceito C");
		else
			printf("Conceito D");
	};

	if(nota>=4 && nota<=4.9){
		if (faltas<=20)
			printf("Conceito D");
		else
			printf("Conceito E");
	};

	if(nota>=0 && nota<=3.9){
		if (faltas<=20)
			printf("Conceito E");
		else
			printf("Conceito E");
	};



	return 0;
}