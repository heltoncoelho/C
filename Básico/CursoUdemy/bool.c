#include <stdio.h>
#include <stdbool.h>

int main (){

	bool a = true;
	bool b = false;

	
	if(a)
		printf("\nA eh verdadeiro\n");

	if(b)
		printf("\nB eh verdadeiro\n");

	if(!b)
		printf("\nB negado eh verdadeiro\n");


	return 0;
}