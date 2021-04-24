/*Faca um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um número
dado.*/

#include<stdio.h>

int main(){

	int n,a,b,c,i;

	printf("Numero: ");
	scanf("%d",&n);

	for(i=n;i<n+100;i++){

		if(i%11==0 && i!=11){
			a=i;
			break;
		}
	}
	
	for(i=n;i<n+100;i++){

		if(i%13==0 && i!=13){
			b=i;
			break;
		}
	}
	
	for(i=n;i<n+100;i++){

		if(i%17==0 && i!=17){
			c=i;
			break;
		}
	}

	printf("\n%d\t",a);
	printf("\n%d\t",b);
	printf("\n%d\t\n",c);



	return 0;
}