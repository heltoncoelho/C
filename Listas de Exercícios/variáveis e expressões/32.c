//Leia um inteiro e imprima: a soma do sucessor de seu triplo COM o antecessor de seu dobro

#include <stdio.h>

int main(){

	int numero;

	printf("Digite um numero inteiro: ");
	scanf("%d",&numero);

	printf("Sucessor do triplo: %d",numero*3+1);
	printf("\nAntecessor do dobro: %d",numero*2-1);
	printf("\nSucessor do triplo + antecessor do dobro: %d",(numero*3+1)+(numero*2-1));





	return 0;
}