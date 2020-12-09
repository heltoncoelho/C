#include <stdio.h>

void soma(int maior, int menor){
	printf("Soma: %d",maior+menor);
}

void subt(int maior, int menor){
	printf("Subtracao: %d",maior-menor);
}

void mult(int maior, int menor){
	printf("Multiplicacao: %d",maior*menor);
}

void divi(int maior, int menor){
	printf("Divisao: %d",maior/menor);
}

int main (){

	int a,b,opt,maior,menor;

	printf("Valor a: ");
	scanf("%d",&a);
	printf("Valor b: ");
	scanf("%d",&b);

	if (a < b){
		menor = a;
		maior = b;
	} else if (b < a){
		menor = b;
		maior = a;
	} else{
		menor = a;
		maior = b;
	}


	printf("ESCOLHA UMA OPERACAO: 1-SOMA / 2-SUBTRACAO / 3-MULTIPLICACAO / 4-DIVISAO ");
	scanf("%d",&opt);

	switch(opt){
		case 1: soma(maior,menor); break;
		case 2: subt(maior,menor); break;
		case 3: mult(maior,menor); break;
		case 4: divi(maior,menor); break;
		default: printf("\nvalor invalido!");
	}


	printf("\n");
	return 0;
}