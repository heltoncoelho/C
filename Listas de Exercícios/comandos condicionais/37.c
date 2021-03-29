/*Faça um programa que calcule a tarifa a pagar de um estacionamento dado o tempo de uso. Ver regras no pdf*/

#include <stdio.h>

int main(){


//variaveis
	int horaEntrada, minutoEntrada;
	int horaSaida, minutoSaida;
	int totalMinutosEntrada, totalMinutosSaida, tempoDePermanencia;
	int aux;


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

//arrendondar para cima os minutos (um minuto a mais conta como uma hora inteira a mais na tabela de preços por hora)
	if(tempoDePermanencia%60 != 0){
		aux = tempoDePermanencia%60;	//se existem minutos excedentes à hora completa, eu os pego aqui.
		tempoDePermanencia += 60-aux; 	/*em seguida, somo a diferença entre 60 minutos (hora completa) e os minutos excedentes, 
		ao tempo total. Exemplo: tempo de permanencia de 61 minutos resulta em cobrança de 120 minutos (hora excedente) seguindo
		os requisitos do exercício*/
	}

//converter o tempo de permanencia em minutos para horas 
	tempoDePermanencia = tempoDePermanencia/60;
	
//calcular pela tabela no pdf o preço a pagar
	if(tempoDePermanencia>=1 && tempoDePermanencia<=2)
		printf("Preco a pagar: %.2f",(double)tempoDePermanencia*1);
	else if (tempoDePermanencia>=3 && tempoDePermanencia<=4)
		printf("Preco a pagar: %.2f",(double)tempoDePermanencia*1.4);
	else if (tempoDePermanencia>=5)
		printf("Preco a pagar %.2f",(double)tempoDePermanencia*2);
	else
		printf("Erro.");

	return 0;
}
