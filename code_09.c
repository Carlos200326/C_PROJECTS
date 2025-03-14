/*
=================================================================================
										
	Author: Carlos Eduardo Cordeiro dos Santos				
	Date: 03-12-2025								
	RJ, Brazil								
										
	Description: This program aims to test the break command to close repeating slabs. 								
										
										

=================================================================================

 */

#include <stdio.h> /* Inclusao da biblioteca de entrada e saida padrao de dados. */
#include <stdlib.h> /* Inclusao da biblioteca padrao da linguagem C que inclui funcoes como exit, malloc */
#include "colors.h" /* Inclusao da biblioteca de definicao de cores, modos para textos no terminal. */

#define OK										0X00

int 
main(int argc, char **argv)
{

	/* Declaracao de variaveis */

	char resposta;

	printf(PURPLE_BOLD"\nO numero de argumentos recebidos pelo terminal e: %d\n"RESET,argc);

	while(*argv!=NULL)
	{

		printf(GREEN_BOLD"\n%s\n"RESET,*argv);
		argv++;
	}

	for(;;)
	{
		printf(BLUE_BOLD"\nAceita (s/n): "RESET);

		resposta = getchar();

		if(resposta == 's' || resposta == 'n')
		{
			break;
		}

		printf("\n");
		

	}


	exit(OK); /* Finaliza o programa, retornando ao Sistema Operacional o valor 0 que indica que o programa foi executado com sucesso. 

		Finishes the program, returning to the Operating System the value 0 that indicates that the program was successfully executed. */

}
