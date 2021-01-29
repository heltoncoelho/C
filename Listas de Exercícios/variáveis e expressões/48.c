//Leia um inteiro em segundos e imprima-o em horas, minutos e segundos

#include <stdio.h>

int main(){

	int tempoSegundos, tempoMinutos, tempoHoras;

	printf("Digite o tempo total em segundos: ");
	scanf("%d",&tempoSegundos);


	tempoHoras = tempoSegundos/3600;
	tempoMinutos = (tempoSegundos%3600)/60;
	tempoSegundos = (tempoSegundos%3600)%60;


	printf("Este tempo em segundos corresponde a um total de:\n");
	printf("%d Horas, %d Minutos e %d Segundos\n",tempoHoras,tempoMinutos,tempoSegundos);

	return 0;
}