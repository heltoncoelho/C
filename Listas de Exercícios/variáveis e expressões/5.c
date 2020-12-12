//leia um numero real e imprima a quinta parte desse numero

#include <stdio.h>

int main(){

	float real = 0;

	printf("Digite um numero real: ");
	scanf("%f",&real);

	printf("Numero %.2f dividido por 5 = %.2f",real,real/5);



	return 0;
}