//Leia uma velocidade em km/h e converta em m/s. MS = K /3.6

#include <stdio.h>

int main(){

	float velocidade = 0;

	printf("Velocidade em Kilometros por hora: ");
	scanf("%f",&velocidade);

	printf("Em metros por segundo: %.2f",velocidade / 3.6);



	return 0;
}