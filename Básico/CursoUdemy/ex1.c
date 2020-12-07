#include <stdio.h>

int main(){

	int n1,n2,n3,media;


	printf("\nDigite as notas das 3 provas na sequencia separadas por um espaço: ");
	scanf("%d %d %d",&n1,&n2,&n3);

	media = (n1+n2+n3) / 3;

	if(media >= 7)
		printf("\nAPROVADO!");
	else
		printf("\nREPROVADO!");



	return 0;
}