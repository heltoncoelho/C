//Leia um valor de area em metros quadrados e apresente-o em acres. A = M * 0.000247

#include <stdio.h>

int main(){

	float area = 0;

	printf("Area em metros quadrados: ");
	scanf("%f",&area);

	printf("Area em acres: %.2f",area*0.000247);



	return 0;
}