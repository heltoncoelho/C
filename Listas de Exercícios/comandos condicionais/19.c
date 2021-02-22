//Verificar se um numero inteiro é divisível por 3 ou por 5 mas não pelos dois simultaneamente.

#include <stdio.h>

int main(){

	int numero;

	printf("Digite um inteiro que seja divisivel por 3 ou por 5: ");
	scanf("%d",&numero);

	if((numero%3 == 0 && numero%5 != 0) || (numero%3 != 0 && numero%5 == 0)){		
		if(numero%3 == 0)
			printf("Divisivel por 3 apenas");
		else if (numero%5 == 0)
			printf("Divisivel por 5 apenas");
	};

	return 0;
}