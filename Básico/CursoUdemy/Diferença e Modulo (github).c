//Calcular a diferença entre dois valores e exibir o modulo do resultado.

#include <stdio.h>
#include <stdlib.h>

int main(){

	float valor_a, valor_b, modulo;

	printf("Digite os valores A e B separados por um espaco: ");
	scanf("%f %f",&valor_a,&valor_b);


	printf("VALOR 1: %.1f \t VALOR 2: %.1f\n",valor_a,valor_b);

	//Caso qualquer valor seja negativo, é necessário fazer uma soma para que o resultado seja o correto.
	if(valor_a < 0 || valor_b < 0){
		modulo = abs(valor_a + valor_b);
		printf("modulo da diferenca entre os valores: %.1f\n",modulo);
	}
	else{
		modulo = abs(valor_a - valor_b);
		printf("modulo da diferenca entre os valores: %.1f",modulo);
	}


	printf("\n");
	return 0;
}