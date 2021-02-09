//Dados dois numeros inteiros mostre o maior deles e a diferença entre ambos.

#include <stdio.h>

int main(){

	int a,b;

	printf("Digite dois inteiros separados por um espaco: ");
	scanf("%d%d",&a,&b);

	if(a>b)
		printf("O primeiro numero eh maior e a diferenca eh %d",a-b);
	else if (a<b)
		printf("O segundo numero eh maior e a diferenca eh %d",b-a);
	else
		printf("Os numeros sao iguais");


	return 0;
}