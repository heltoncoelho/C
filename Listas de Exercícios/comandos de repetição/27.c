/*Em matemática, o número harmônico designado por H(n) define-se como sendo a soma da série harmônica:
H(n) = 1 + 1/2 + 1/3 + 1/4 + ... 1/n. Leia um inteiro positivo e apresente o valor de H(n)*/

#include <stdio.h>

int main(){

	int i, n;
	float soma = 0;

	printf("Digite um inteiro positivo: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		soma += (float) 1/i;
	}


	printf("H(n) = %2f",soma);




	return 0;
}