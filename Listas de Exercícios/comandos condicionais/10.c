//Recebe a altura e o sexo e calcule o peso ideal. Homens = (72.7*h)-58. Mulheres = (62.1*h)-44.7

#include <stdio.h>

int main(){

	float altura;
	char sexo;

	printf("Digite a altura em metros: ");
	scanf("%f",&altura);
	setbuf(stdin,NULL);
	printf("Digite o sexo: M para mulher, H para homem: ");	
	scanf("%c",&sexo);	

	if(sexo == 'm' || sexo == 'M')
		printf("Peso ideal: %.2f kg",(62.1*altura)-44.7);	
	else if (sexo == 'h' || sexo == 'H')
		printf("Peso ideal: %.2f kg",(72.7*altura)-58);	
	else
		printf("Opcao invalida");

	return 0;
}