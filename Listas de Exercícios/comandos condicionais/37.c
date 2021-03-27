/*Faça um programa que calcule a tarifa a pagar de um estacionamento dado o tempo de uso. Ver regras no pdf*/

#include <stdio.h>

int main(){


//variaveis
	int horaEntrada, minutoEntrada;
	int horaSaida, minutoSaida;
	int totalMinutosEntrada, totalMinutosSaida, tempoDePermanencia;


//coletar os dados
	printf("Hora de entrada:");
	scanf("%d",&horaEntrada);

	printf("Minuto de entrada:");
	scanf("%d",&minutoEntrada);

	printf("Hora de saida:");
	scanf("%d",&horaSaida);

	printf("Minuto de saida:");
	scanf("%d",&minutoSaida);

//converter a diferença de tempo entre o momento de saída e o momento de chegada em minutos para ter o tempo de permanencia.
	totalMinutosEntrada = horaEntrada*60+minutoEntrada;
	totalMinutosSaida = horaSaida*60+minutoSaida;
	tempoDePermanencia = totalMinutosSaida - totalMinutosEntrada;

//converter o tempo de permanencia em minutos para horas 
	tempoDePermanencia = tempoDePermanencia/60;

	//NOTA: FALTA ARREDONDAR O TEMPO PARA CIMA. UM MINUTO A MAIS CONTA NA TABELA COMO UMA HORA A MAIS
//calcular pela tabela no pdf o preço a pagar
	



	return 0;
}