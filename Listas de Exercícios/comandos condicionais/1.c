//Receba dois números e mostre qual deles é o maior

#include <stdio.h>

int main(){

	int a,b;

	printf("Digite um numero inteiro A: ");
	scanf("%d",&a);

	printf("Digite um numero inteiro B: ");
	scanf("%d",&b);

	if (a>b)
		printf("O numero A eh maior.");
	else if (a<b)
		printf("O numero B eh maior");
	else
		printf("Numeros iguais");


	return 0;
}