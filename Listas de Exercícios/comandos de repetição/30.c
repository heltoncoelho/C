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

	/*//segunda sequência
	soma = 0, i = 0, j = 0;
	for(i=0;i=10;i++){
		for(j=1;j<2*n+1;j++){
			soma+=(i+1)-(2*j);
			soma+=(i+1)+(2*j+1);
		}
	}

	printf("\nSequencia 2: %d",soma);
	
	*/
	return 0;
	
}