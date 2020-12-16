//Leia um valor de area em acres e apresente-o convertido em metros quadrados. M = A * 4048.58

#include <stdio.h>

int main(){

	float area = 0;

	printf("Area em acres: ");
	scanf("%f",&area);

	printf("Area em ametros quadrados: %.2f",area*4048.58);



	return 0;
}