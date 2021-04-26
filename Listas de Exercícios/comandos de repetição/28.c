/*Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a fórmula a seguir E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N !*/

#include<stdio.h>

//função para fatorar o denominador e retornar o valor fatorado.
float fatora(float n){
	float fat=1;
	if(n>=0){		
		while(n>0){
			fat*=n;
			n--;
		}		
	}else
		return -1;

	return fat;
}

int main(){

	float n = 0;
	int i = 0;
	float soma = 0;
	int max = 0;
	
	printf("Digite um inteiro N positivo: ");
	scanf("%d",&max);

	for(i=1;i<max;i++){
		n = fatora(i);
		soma+= 1/n;
	}

	printf("\nE = %f",soma);


	return 0;
}