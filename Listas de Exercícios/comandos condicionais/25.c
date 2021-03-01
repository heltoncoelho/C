	/*Calcule as raízes da equação de segundo grau.*/

#include <stdio.h>
#include <math.h>

int main(){

	float delta, a , b, c, x1, x2, raizUnica;	

	do{
		printf("Variavel 'a' da equacao de segundo grau (maior que o): ");
		scanf("%f",&a);
	} while (a <= 0);

	printf("Variavel 'b' da equacao de segundo grau: ");
	scanf("%f",&b);
	printf("Variavel 'c' da equacao de segundo grau: ");
	scanf("%f",&c);

	//cálculo do delta
	delta = pow(b,2) - 4*a*c;

	if (delta == 0){
		raizUnica = (-b+sqrt(delta)) / 2*a;
		printf("Delta igual a 0, raiz unica: %.2f",raizUnica);
	}

	if(delta >= 0){
		//cálculo das raízes
		x1 = (-b+sqrt(delta)) / 2*a;
		x2 = (-b-sqrt(delta)) / 2*a;

		printf("S = {%2.f,%.2f}",x1,x2);


	} else
		printf("Nao existe raiz");



	return 0;
}