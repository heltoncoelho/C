/*Calcule as seguintes sequências:

1+2+3+4+5+...n

1-2+3-4+5-...(2n-1)

1+3+5+7+...(2n-1)

*/

#include <stdio.h>

int main(){

	int n = 0, soma = 0;
	int i = 0, j = 0;

	printf("N: ");
	scanf("%d",&n);

	//primeira sequência
	for(i=1;i<=n;i++){
		printf("%d ",i);
		soma+=i;		
	}
	printf("\nSequencia 1: %d",soma);

	/*

	//segunda sequência




	//terceira sequência



	printf("\nSequencia 2: %d",soma);
	
	*/
	return 0;
	
}