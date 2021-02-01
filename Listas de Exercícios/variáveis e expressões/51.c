//Leia as coordenadas x e y de um ponto e calcule a distancia da origem (0,0)

#include <stdio.h>
#include <math.h>

int main(){

	int x,y,origem;

	printf("Digite a coordenada no eixo x: ");
	scanf("%d",&x);
	printf("Digite a coordenada no eixo y: ");
	scanf("%d",&y);

	//teorema de pitágoras
	origem = sqrt(pow(x,2)+pow(y,2));

	printf("Distancia ate o ponto de origem: %d",origem);



	return 0;
}