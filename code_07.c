/*
=================================================================================
										
	Author: Carlos Eduardo Cordeiro dos Santos				
	Date: 03-12-2025								
	RJ, Brazil								
										
	Description: Program to test the interaction plate is, where we will use this structure to print a sequence of n 10 times 
	the value assumed by the control variable against each interaction. 								
										
																				
=================================================================================

 */
#include <stdio.h> /* Inclusao da biblioteca de entrada e saida padrao de dados. */
#include "colors.h" /* Inclusao da biblioteca que contem as definicoes de cores para o terminal. */

#define OK								0X00

int
main(int argc, char **argv)
{

	/* ------ Declaracao de variaveis ------- */
	unsigned short int cont;

	printf(PURPLE_BOLD"\nNumero de argumentos recebidos pelo terminal: %d\n"RESET,argc);

	/* -------- Lista todos os argumentos recebidos --------- */
	while(*argv != NULL)
	{

		printf("\n"GREEN_BOLD"%s"RESET"\n",*argv);
		argv++;

	}

	/* Define um laco que executa um bloco de instrucoes durante dez vezes.*/
	for(cont = 0; cont < 10; cont++)
	{

		/* Imprime o valor que a variavel de controle cont assume a cada interacao, ao termino de cada
		   interacao cont eh atualizada em uma unidade. */
		printf("\n"CYAN_SUB_BOLD"Cont vale %u"RESET"\n",cont); /* Imprime na cor azul no modo sublinhado e em negrito. */

	}
	

	return OK; /* Retorna o valor 0 para o Sistema Operacional indicando sucesso na execucao do programa.

		     Returns the value 0 to the Operating System indicating success in the execution of the program. 

		   */

}
