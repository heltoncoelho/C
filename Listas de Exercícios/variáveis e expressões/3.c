//Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main(){

	int a,b,c;

	printf("Digite tres numeros inteiros separados por espaco: ");
	scanf ("%d %d %d",&a,&b,&c);

	printf("Soma: %d",a+b+c);


	return 0;
}