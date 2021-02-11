//Leia duas notas de um aluno e verifique se sao validas (entre 1.0 e 10.0).Calcule a media e avise se nao são válidas.

#include <stdio.h>

int main(){

	float nota1,nota2;

	printf("Nota 1: ");
	scanf("%f",&nota1);
	printf("Nota 2: ");
	scanf("%f",&nota2);

	if ((nota1 >= 1.0 && nota1 <= 10.0) && (nota2 >= 1.0 && nota2 <= 10.0))
		printf("Media: %.2f",(nota1+nota2)/2);
	else
		printf("Alguma nota esta fora do intervalo aceitavel (1-10)");
		


	return 0;
}