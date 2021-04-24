/*Leia um numero positivo e imprima seus divisores.*/

#include <stdio.h>

int main(){

	int numeroPositivo;
	int i;

	printf("Digite um numero positivo: ");
	scanf("%d",&numeroPositivo);

	for(i=1;i<=numeroPositivo;i++){

		if(numeroPositivo%i == 0)
			printf("%d ",i);
	}

	return 0;
}