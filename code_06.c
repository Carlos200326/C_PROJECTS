#include <stdio.h> /*Inclusao da biblioteca de entrada e saida padrao de dados */
#include "colors.h"

#define OK 											0X00

int 
main(int argc, char **argv)
{

	/* ------ Declaracao de variaveis -------- */

	int indice, indice_arg;


	/* ----- Inicializacao de variaveis -------- */

	indice_arg = 0;
	indice = 100;

	fprintf(stdout, "\n%sNumero de argumentos recebidos eh: %d%s\n",GREEN,argc,RESET);

	while(indice_arg < argc)
	{

		fprintf(stdout,"\n%s%s%s\n",GREEN,argv[indice_arg],RESET);
		indice_arg++;

	}

	do
	{
		printf("\n%sIndice vale: %d%s\n",BLUE,indice,RESET); /* Imprime em cor azul o valor que a variavel indice assume a cada interacao enquanto
		a expressao indice < 100 resultar em um valor diferente de zero, que internamente, pela linguagem C, e analisado ou interpretado como
		sendo um resultado verdadeiro (true). O conjunto de instrucoes presente dentro de chaves sera executado ao menos uma vez, diferenciando o ciclo
		do...while do ciclo while, pois no segundo um conjunto de instrucoes somente eh executado apos passar pelo teste de verificacao e analise
		da expressao, quando no ciclo do while, êxecuta-se a instrucao primeiro e depois analisa-se a expressao eh veridica, se sim, o 
		conjunto de instrucoes sera executado novamente, caso nao seja, o fluxo de execucao se seguira normalmente, indo para proximo 
		bloco de instrucoes apos a estrutura do... while. */

		indice -= 1; /* Subtrai uma unidade a cada interacao do laco while. */

	}
	while(indice > 0);

	return OK;

}
