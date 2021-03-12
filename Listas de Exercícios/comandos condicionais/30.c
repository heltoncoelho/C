/*Receba três números e mostre-os em ordem crescente*/

#include <stdio.h>

int main(){

	int x,y,z, maior,medio,menor;

	printf("Digite o primeiro numero: ");
		scanf("%d",&x);
	printf("Digite o segundo numero: ");
		scanf("%d",&y);
	printf("Digite o terceiro numero: ");
		scanf("%d",&z);

	if(x!=y && y!=z){
		if(x<y && y<z)
			printf("%d, %d, %d",x,y,z);
		if(x<z && z<y)
			printf("%d, %d, %d",x,z,y);
		if(y<x && x<z)
			printf("%d, %d, %d",y,x,z);
		if(y<z && z<x)
			printf("%d, %d, %d",y,z,x);
		if(z<x && x<y)
			printf("%d, %d, %d",z,x,y);
		if(z<y && y<x)
			printf("%d, %d, %d",z,y,x);
	} else
		printf("Nao digite numeros iguais.");

	return 0;
}