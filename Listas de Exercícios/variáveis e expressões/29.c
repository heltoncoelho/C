//Ler quatro notas, calcular a média aritmética e imprimir.

#include <stdio.h>

int main(){

	float n1,n2,n3,n4;

	printf ("Digite as quatro notas separadas por espaco: ");
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

	printf("Media aritmética: %.2f",(n1+n2+n3+n4)/4);




	return 0;
}