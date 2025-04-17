/*
=================================================================================
										
	Author: Carlos Eduardo Cordeiro dos Santos				
	Date: 17-04-25								
	RJ, Brazil								

	Description: Desenvolvimento de laco de interacao for. 								
										
										

=================================================================================

 */

#include <stdio.h> /* Biblioteca com definicoes de funcoes entrada e saida, ex.: printf, fprintf... */
#include <stdlib.h> /* Biblioteca padrao de dados, ex.: exit, malloc, ... */
#include "colors.h" /* Biblioteca de cores para terminal */

#define OK									0X00

int
main(int argc,
		char **argv)
{

	
	/* Definicao de variaveis (tipo, modificador de sinal e largura) */

	unsigned int indice;

	/* Vamos criar um laço de interacao for  */

	fprintf(stdout,
			GREEN_BOLD"\nName of program: %s, count arguments: %d  \n"RESET,
			*argv,argc);


	for(indice = 0; indice < 10; indice++)
	{

		fprintf(stdout, PURPLE_BOLD"%u "RESET,indice);

		if((indice%5)==0)
		{
			printf("\n");

		}

	}

	printf("\n");

	exit(OK);

}
