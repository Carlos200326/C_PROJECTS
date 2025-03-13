/*
=================================================================================
										
	Author: Carlos Eduardo Cordeiro dos Santos				
	Date: 03-12-2025								
	RJ, Brazil								
										
	Description: The purpose of this program is to create a repeating list using the goto command instruction that 
	indicates to the compiler to divert the execution flow to certain lines. Thus we will be replicating the functionality 
	similar to repeating structures such as for and while. 							
										
										

=================================================================================

 */

#include <stdio.h> /* Inclusao da biblioteca de entrada e saida padrao de dados. */
#include "colors.h" /* Inclusao da biblioteca que define estilo de cores, modo para caracteres no terminal. */

#define OK												0X00

int
main(int argc, char **argv)
{


	/* ---------- Declaracao de variaveis ----------- */
	
	unsigned short cont;

	/* ----------- Inicializacao de variaveis ------------ */

	cont = 0;

	printf("\n"PURPLE_BOLD"O numero de argumentos recebidos pelo programa atraves do terminal e %d."RESET"\n",argc);

	while(*argv)
	{

		printf("\n"GREEN_BOLD"%s"RESET"\n",*argv);
		argv++; /* argv = argv + 1 or argv +=1 or ++argv */
	
	}

	PARTE_1:

		printf("\n"BLUE_BOLD"Cont vale %d"RESET"\n", cont);

		cont++;


	/* Executa a interacao durante 10 vezes, pois quando a condicao que eh determinada pela variavel de controle cont 
	 * ainda for verificado como sendo verdadeira, havera desvio de executacao para a posicao do codigo nomeada pela label PARTE_1.
	 * Executando a instrucao que indica para imprimir o valor de cont a cada interacao feita. */
	if(cont<10)
	{

		goto PARTE_1;
	}


	return OK; /* Retorna o valor 0 ao Sistema Operacional indicando sucesso na execucao do programa. 

		      Returns the value 0 to the Operating System indicating success in the execution of the program. 

		   */


}
