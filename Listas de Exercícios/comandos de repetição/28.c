/*Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a fórmula a seguir E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N !*/

//função para fatorção do denominador
float fatora(float n){
	float fat = 1;
	if(n>=0){
		while(n>0){
			fat*=n;
			n--;
		}
	}else
		return -1;

	return fat;
}

#include<stdio.h>

int main(){

	float max = 0, soma = 1;	//posso iniciar soma como 1 ou somar 1 na hora de imprimir para ter o resultado correto.
	int i = 0;

	printf("Numero: ");
	scanf("%f",&max);

	//laço para soma. 
	for(i=1;i<=max;i++){

		soma+= 1/fatora(i);
	}

	printf("E = %f",soma);


	return 0;
}