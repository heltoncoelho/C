/*Some todos os numeros naturais abaixo de 1000 que são multiplos de 3 ou 5.*/

#include <stdio.h>

int main(){

	int i, soma = 0;

	for(i=1;i<1000;i++){


		if((i%3==0 && i%5!=0) || (i%5==0 && i%3!=0) ){
			printf("%d ",i);
			soma+=i;
		};
	};


	return 0;
}