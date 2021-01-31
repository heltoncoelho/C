/*Leia o horario de inicio de uma experiencia (hora, minuto e segundo) e a duração em segundos. O programa deve
resultar no novo horário (hora, minuto e segundo) de término da experiência.*/


#include <stdio.h>

int main(){

	int hora, minuto, segundo, duracaoExperimento, duracaoTotal;

	printf("Entre como o horario de inicio separando hora, minuto e segundo por espacos: ");
	scanf("%d%d%d",&hora,&minuto,&segundo);

	printf("Entre como o tempo de duracao em segundos da experiencia: ");
	scanf("%d",&duracaoExperimento);

	//conversao do horario para segundos e soma com a duracao da experiencia.
	duracaoTotal = hora*3600 + minuto*60 + segundo + duracaoExperimento;

	//reconversao do tempo de segundos para o formato hh:mm:ss
	hora = duracaoTotal/3600;
	minuto = (duracaoTotal%3600)/60;
	segundo = (duracaoTotal%3600)%60;

	printf("Horario de termino do experimento: %d:%d:%d",hora,minuto,segundo);

	return 0;
}