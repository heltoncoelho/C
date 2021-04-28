/*Escreva um programa para calcular o valor da série S para 5 termos.
S = 0 + 1/2! + 2/4! + 3/6! + ...*/

#include <stdio.h>

//fatora o denominador e devolve o resultado.
float fatora (float n){
	float fat = 1;

	if(n>=0){
		while(n>0){
			fat*=n;
			n--;
		}
	}else
		return -1;
	
	return fat;
}


int main(){

	int i = 0, k = 0;
	float soma = 0;	

	//laço externo itera o denominador
	for(i=2;i<=10;i++){
		
		if(i%2 == 0){
			k++;	//k incrementa numerador em 1 a cada multiplo de 2 encontrado (a ser fatorado)			
			soma+=k/fatora(i);			
		}			
	}

	printf("S = %f",soma);

	return 0;
}