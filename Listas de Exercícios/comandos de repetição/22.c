/*O aluno deve introduzir uma sequência arbitraria de notas no intervalo de 10 a 20. O numero de notas nao é pré definido e o
programa deve encerrar com a digitação de uma nota inválida. Imprimir a media aritmética.*/

#include <stdio.h>
#include <stdbool.h>

int main(){


	bool check = true;
	int somaNotas = 0;
	int contaNotas = 0;
	int mediaAritmetica = 0;
	int nota = 11;	

	while(check){
		printf("Digite uma nota: ");
		scanf("%d",&nota);

		if(nota>=10 && nota<=20){
		contaNotas++;
		somaNotas += nota;
		}else
			break;		
	}

	mediaAritmetica = somaNotas / contaNotas;
	printf("\nMedia: %d",mediaAritmetica);

	return 0;
}