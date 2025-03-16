/*
=================================================================================
										
	Author: Carlos Eduardo Cordeiro dos Santos				
	Date: - -								
	RJ, Brazil								
										
	Description: Program receives by entrances through the terminal the sides of a triangle. 								
										
										

=================================================================================

 */

#include <stdio.h> /* Inclusao da biblioteca de entrada e saida de dados padrao.  */
#include <stdlib.h> /* Inclusao da biblioteca padrao, contem definicoes de funcoes como exit(), malloc()*/
#include <errno.h>
#include <limits.h>
#include "colors.h"

#define OK										0X00
#define CARACTERE_INVALIDO								0X01
#define VALOR_EXCEDIDO									0X02
#define ARGUMENTOS_INSUFICIENTES							0X03

#define END_OF_STRING									'\0'
#define N_ARGUMENTS									4

int
main (int argc, char **argv)
{


	/* ----- Declaracao de variaveis ------*/

	long aux;
	int count;
	unsigned a,b,c; /* Lados de um triangulo */
	char *caractere;


	/*------ Inicializacao de variaveis --------- */

	count = 0;

	if(argc < N_ARGUMENTS)
	{
		fprintf(stderr,
				"\n"RED_BOLD"Uso: ./code_10 <int> <int> <int>. "RESET"\n");

		return ARGUMENTOS_INSUFICIENTES;

	}

	
	fprintf(stdout,
			PURPLE_BOLD"\nO numero de argumentos recebidos pelo programa atraves do terminal e: %d \n"RESET,
			argc
		);

	while(count < argc)
	{


		fprintf(stdout,
				"\n"CYAN_BOLD"%s"RESET"\n",
				argv[count]);

		count++;


	}

	aux = strtol(argv[1], &caractere, 10);

	if(*caractere != END_OF_STRING)
	{

		fprintf(stderr, 
				"\n"RED_BOLD"Caractere: \'%c\' invalido. O argumento deve ser um tipo int."RESET"\n",
				*caractere
			);

		return CARACTERE_INVALIDO;

	}

	if(errno == ERANGE)
	{

		fprintf(stderr, 
				"\n"RED_BOLD"Overflow (ou underflow) detectado, digite um valor entre <%i,%i> "RESET"\n",
				INT_MIN, 
				INT_MAX
			);

		return VALOR_EXCEDIDO;

	}

	if(aux < INT_MIN || aux > INT_MAX)
	{

		fprintf(stderr,
				"\n"RED_BOLD"Valor fora da faixa: <%d, %d> "RESET"\n",
				INT_MIN,
				INT_MAX
			);

		return VALOR_EXCEDIDO;

	}

	a = (int) aux;

	aux = strtol(argv[2], &caractere, 10);

	if(*caractere != END_OF_STRING)
	{

		fprintf(stderr, 
				"\n"RED_BOLD"Caractere: \'%c\' invalido. O argumento deve ser um tipo int."RESET"\n",
				*caractere
			);

		return CARACTERE_INVALIDO;

	}

	if(errno == ERANGE)
	{

		fprintf(stderr, 
				"\n"RED_BOLD"Overflow (ou underflow) detectado, digite um valor entre <%i,%i> "RESET"\n",
				INT_MIN, 
				INT_MAX
			);

		return VALOR_EXCEDIDO;

	}

	if(aux < INT_MIN || aux > INT_MAX)
	{

		fprintf(stderr,
				"\n"RED_BOLD"Valor fora da faixa: <%d, %d> "RESET"\n",
				INT_MIN,
				INT_MAX
			);

		return VALOR_EXCEDIDO;

	}


	b = (int) aux;

	aux = strtol(argv[3], &caractere, 10);

	if(*caractere != END_OF_STRING)
	{

		fprintf(stderr, 
				"\n"RED_BOLD"Caractere: \'%c\' invalido. O argumento deve ser um tipo int."RESET"\n",
				*caractere
			);

		return CARACTERE_INVALIDO;

	}

	if(errno == ERANGE)
	{

		fprintf(stderr, 
				"\n"RED_BOLD"Overflow (ou underflow) detectado, digite um valor entre <%i,%i> "RESET"\n",
				INT_MIN, 
				INT_MAX
			);

		return VALOR_EXCEDIDO;

	}

	if(aux < INT_MIN || aux > INT_MAX)
	{

		fprintf(stderr,
				"\n"RED_BOLD"Valor fora da faixa: <%d, %d> "RESET"\n",
				INT_MIN,
				INT_MAX
			);

		return VALOR_EXCEDIDO;

	}

	c = (int) aux;


	fprintf(stdout,
			"\n"GREEN_BOLD"Numeros recebidos sao: a = %d, b = %d, c = %d."RESET"\n",
			a,
			b,
			c
		);

	exit(OK); /* Finaliza o programa, retornando o valor 0 ao Sistema Operacional indicando sucesso na execucao do programa. */

}
