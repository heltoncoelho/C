/*Leia três números positivos e calcula uma das médias de acordo com um valor digitado pelo usuário:
1 - geométrica
2 - ponderada
3 - harmonica
4 - aritmética

PS: fórmulas no .pdf*/

#include <stdio.h>
#include <math.h>

int main(){

	float x,y,z;
	int opt;

	printf("Digite um numero x positivo: ");
		scanf("%f",&x);
	printf("Digite um numero y positivo: ");
		scanf("%f",&y);
	printf("Digite um numero z positivo: ");
		scanf("%f",&z);

	printf("\nDigite: 1 para média geometrica, 2 para ponderada, 3 para harmonica ou 4 para aritmetica: ");
	scanf("%d",&opt);

	switch(opt){
		case 1: printf("Geometrica: %.2f", pow((x*y*z),(1/3)));break;
		case 2: printf("Ponderada: %.2f",((x+2*y+3*z)/6));break;
		case 3: printf("Harmonica: %.2f",(1/((1/x)+(1/y)+(1/z))));break;
		case 4: printf("Aritmetica: %.2f",(x+y+z)/3);break;
		default: printf("Erro.\n");
	};


	return 0;
}