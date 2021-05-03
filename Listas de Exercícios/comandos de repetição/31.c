/*Faça um programa que calcule e escreva o valor de S = 1/1 + 3/2 + 5/3 + 7/4 ... 99/50*/

#include <stdio.h>

int main(){

	int i = 1, j = 1;
	float soma = 1;

	while(j!=50){
		i+=2;
		j++;		
		soma+=i/j;

		printf("i = %d\tj = %d\n",i,j);
	}

	printf("soma: %.2f",soma);

	return 0;
}