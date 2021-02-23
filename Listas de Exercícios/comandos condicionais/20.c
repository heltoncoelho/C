/*Dados três valores a,b,c, verificar se podem ser os lados de um triangulo e, se forem, que tipo de triangulo é. Considere:
1 - o comprimento de cada lado de um triangulo é menor que a soma dos outros dois lados
2 - o triângulo equilátero tem três lados iguais
3 - o triangulo isósceles tem dois lados iguais
4 - o triangulo escaleno tem os três lados com medidas diferentes*/

#include <stdio.h>

int main(){

	int a,b,c;

	printf("Comprimento do lado A: ");
	scanf("%d",&a);
	printf("Comprimento do lado B: ");
	scanf("%d",&b);
	printf("Comprimento do lado C: ");
	scanf("%d",&c);

	//verificar se é um triangulo primeiro
	if ((a<b+c && b<a+c && c<a+b) && (a!=0 && b!=0 && c!=0)){

		if(a==b && b==c)
			printf("Equilatero");
		else if((a==b && b!=c) || (a==c && c!=b) || (c==b && b!=a))
			printf("isosceles");
		else if (a!=b && b!=c)
			printf("Escaleno");		
	}else
		printf("Erro!");

	return 0;
}

