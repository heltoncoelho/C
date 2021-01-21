/*A importancia de 780k sera dividida entre tres ganhadores, o primero receberá 46%, o segundo 32%, o terceiro o 
restante. Calcule e imprima*/

#include <stdio.h>

int main(){

	float premio = 780000;

	printf("Ganhador 1: %.2f\tGanhador 2: %.2f\t Ganhador 3: %.2f\n",
		premio*0.46, premio*0.32, premio*22);



	return 0;

}