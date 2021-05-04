/*Simule o lançamento de dois dados d1 e d2, n vezes. Mostre os valores de cada dado e os compare (>,<,=)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int d1, d2, n, i;

	srand(time(NULL));

	printf("Quantos lancamentos? ");
	scanf("%d",&n);


	for(i=0;i<n;i++){
		d1 = rand()%10;
		d2 = rand()%10;

		printf("D1: %d\tD2: %d\n",d1,d2);		

		if(d1==d2)
			printf("d1 igual a d2");
		if(d1<d2)
			printf("d1 menor que d2");
		if(d1>d2)
			printf("d1 maior que d2");

		printf("\n\n");
	}

	return 0;
}