
//Converter M/s em KM/h. Fórmula: K = M * 3.6

#include <stdio.h>

	int main(){

	float velocidade = 0;

	printf("Velocidade em metros por segundo: ");
	scanf("%f",&velocidade);

	printf("Velocidade em kilometros por hora: %.2f",velocidade*3.6);


	return 0;
}