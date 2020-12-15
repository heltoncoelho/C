//Leia uma massa em quilogramas e converta em libras. L = K / 0.45

#include <stdio.h>

int main(){

	float massa = 0;

	printf("Massa em quilogramas: ");
	scanf("%f",&massa);

	printf("Em libras: %.2f",massa / 0.45);


	return 0;
}