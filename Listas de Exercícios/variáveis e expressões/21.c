//Leia um valor de massa em libras e converta em quilogramas. K = L * 0.45

#include <stdio.h>

int main(){

	float massa = 0;

	printf("Massa em libras: ");
	scanf("%f",&massa);

	printf("Massa em quilogramas: %.2f",massa*0.45);



	return 0;
}