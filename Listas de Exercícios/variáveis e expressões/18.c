//Leia um volume em metros cúbicos e converta em litros. L = 1000 * M

#include <stdio.h>

int main(){

	float metros_3 = 0;

	printf("Volume em metros cubicos: ");
	scanf("%f",&metros_3);

	printf("Em litros: %.f",metros_3*1000);




	return 0;
}