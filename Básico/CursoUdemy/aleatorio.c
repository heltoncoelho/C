#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

	int aleatorio = 0;

	//alimentar o rand
	srand(time(NULL));

	//aleatorio ate 10;
	aleatorio = rand() % 10;
	printf("Valor aleatorio: %d",aleatorio);

	return 0;
}