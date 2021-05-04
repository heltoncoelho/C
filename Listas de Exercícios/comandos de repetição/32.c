/*Simule o lançamento de dois dados d1 e d2, n vezes. Mostre os valores de cada dado e os compare (>,<,=)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int d1, d2;

	srand(time(NULL));

	d1 = rand()%10;
	d2 = rand()%10;

	printf("D1: %d\n",d1);
	printf("D2: %d\n",d2);

	if(d1==d2)
		printf("d1 igual a d2");
	if(d1<d2)
		printf("d1 menor que d2");
	if(d1>d2)
		printf("d1 maior que d2");


	return 0;
}