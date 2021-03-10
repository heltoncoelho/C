/*Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de a + b. onde a e b são numeros aleatórios.
Faça cinco perguntas ao aluno e mostre a ele as perguntas e as respostas corretas, alem de quantas vezes ele acertou.*/

#include <stdio.h>
#include <stdlib.h>	//necessário para as funções rand() e srand()
#include <time.h>	//necessário para a função time()


int main(){

	int a, b, resposta;
	int contadorDeAcertos = 0;
	int itera = 0;

	srand(time(NULL));


	while(itera != 5){

		a = rand() % 100;
		b = rand() % 100;

		printf("Qual a soma de %d e %d?\n",a,b);

		scanf("%d",&resposta);

		if(resposta == (a+b)){
			contadorDeAcertos++;
			printf("A resposta eh %d e você acertou!\n\n",a+b);			
		};
		itera++;
	};

	printf("Voce acertou um total de %d vezes.",contadorDeAcertos);


	return 0;
}