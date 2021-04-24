/*Leia a opção do usuário e execute a operação escolhida. Escreve uma mensagem de erro se a opção for inválida:
1 - soma de 2 numeros
2 - diferença entre 2 números (maior pelo menor)
3 - produto entre 2 números
4 - divisão entre 2 números (o denominador não pode ser zero).*/

#include <stdio.h>

int main(){

	int a, b, opt;

	printf("Termo A: ");
	scanf("%d",&a);
	printf("Termo B: ");
	scanf("%d",&b);

	printf("Digite: [1] para somar\t[2] para subtrair\t[3] para multiplicar\t[4] para dividir");
	scanf("%d",&opt);
	
	if(opt==1)
		printf("Soma: %d",a+b);
	else if(opt==2){
		if(a>b)
			printf("Diferenca a-b: %d",a-b);
		else if (a<b)
			printf("Diferenca b-a: %d",b-a);
		else
			printf("Diferenca  = 0");
	}
	else if(opt==3)
		printf("Multiplicacao: %d",a*b);
	else if(opt==4){
		if(b!=0)
		printf("Divisao a por b: %d",a/b);	
		else
		printf("erro")	;
	}	

	printf("\n");

	return 0;		
}