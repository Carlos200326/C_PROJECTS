#include <stdio.h> /* Inclusao da biblioteca padrao de entrada e saida de dados */

#define OK										0X00

int
main(int argc, char **argv) /* Definicao da funcao main */
{

	int value, reference; /* Renomeando duas posicoes na memoria distintas para armazenar valores do tipo inteiro. */

	value = 18;
	reference = 15;

	/* Imprimindo na tela o numero de argumentos recebidos pelo terminal e o primeiro argumento recebido, que deve ser sempre
	  o caminho que especifica a localizacao do programa junto ao nome do programa. */

	printf("\nO numero de argumentos recebidos pelo terminal eh: %i. Argv[0] = %s\n",argc,argv[0]);


	/* Trabalhando-se com estrutura de decisao if, else-if e else.*/

	if(value == reference)
	{

		printf("\nOs valores value e reference sao iguais entre si.\n");

	}

	else if(value > reference)
	{
		
		printf("\nO valor value eh maior do que reference.\n");

	}

	else
	{
	
		printf("\nO valor reference e maior do que value.\n");

	}


	return OK; /* Retorna ao Sistema Operacional o valor 0 que indica a finalizacao do programa sem erros. */

}
