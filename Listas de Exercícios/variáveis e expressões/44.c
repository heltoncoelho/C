/*Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo. Calcule e mostre quantos degraus
o usuário deverá subir para atingir seu objetivo.*/

#include <stdio.h>
#include <math.h>

int main(){

		float altura_degrau, altura_desejada;

		printf("Altura do degrau em centimetros:");
		scanf("%f",&altura_degrau);

		printf("Altura que o usuario deseja alcancar em centimetros: ");
		scanf("%f",&altura_desejada);

		//Usamos a função ceil() da biblioteca math.h para arrendondar para cima o resultado.
		printf("O usuario devera subir %.f degraus para atingir a altura desejada",ceil(altura_desejada/altura_degrau));



	return 0;
}