/*Leia um distancia em Km e a quantidade de gasolina consumida em um percurso. Calcule o consumo km/l*/

#include <stdio.h>

int main(){

	int litros, distancia, consumo;

	printf("Distancia percorrida: ");
	scanf("%d",&distancia);

	printf("Combustivel gasto (em litros): ");
	scanf("%d",&litros);

	consumo = distancia / litros;

	if(consumo < 8)
		printf("Consumo: %d km/l. Venda o carro!",consumo);
	else if (consumo >= 8 && consumo <= 12)
		printf("Consumo: %d km/l. Economico!",consumo);
	else if (consumo > 12)
		printf("Consumo: %d km/l. Super economico",consumo);


	return 0;
}