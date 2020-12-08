#include<stdio.h>
#include<stdbool.h>

int main(){

	int valores[3];
	bool check = 0;


	printf("Digite a medida (em cm) dos tres lados do triangulo:\n");

	//preenche o vetor
	for(int i=0;i<3;i++){
		printf("\nLado %d:",i);
		scanf("%d",&valores[i]);
	}

	//compara os valores
	if(valores[0] == valores[1] && valores[1] == valores[2])
		printf("\nO triangulo eh equilatero!\n");
	else
		printf("\nNao eh equilatero!");




	return 0;
}