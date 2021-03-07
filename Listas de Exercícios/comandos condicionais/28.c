/*Leia três números positivos e calcula uma das médias de acordo com um valor digitado pelo usuário:
1 - geométrica
2 - ponderada
3 - harmonica
4 - aritmética

PS: fórmulas no .pdf*/

#include <stdio.h>

int main(){

	int x,y,z, opt;

	printf("Digite um numero x positivo: ");
		scanf("%d",&x);
	printf("Digite um numero y positivo: ");
		scanf("%d",&y);
	printf("Digite um numero z positivo: ");
		scanf("%d",&z);

	printf("\nDigite: 1 para média geometrica, 2 para ponderada, 3 para harmonica ou 4 para aritmetica: ");
	scanf("%d",&opt);

	switch(opt){
		case 1: break;
		case 2: break;
		case 3: break;
		case 4: break;
		default: printf("Erro.\n");
	};



	return 0;
}