#include <stdio.h> /* Inclusao da biblioteca de entrada e saida padrao de dados. */

#define OK 											0X00

int
main(int argc, char **argv)
{


	/* ----- Declaracao de variaveis ------ */

	int indice_arg;


	/* ------ Inicializacao de Variaveis ------*/

	indice_arg = 0;

	/*Imprimindo caracteres coloridos usando o codigo de escape ANSI para cores no terminal. */
	printf("\n\033[1;32mNumero de argumentos recebidos: %d\033[0m\n",argc);

	
	/* Laco while para percorre cada argumento transmitido ao programa via terminal. */


	while(indice_arg < argc)
	{

		printf("\n\033[1;35m%s\033[0m\n",argv[indice_arg]);
		indice_arg++; /* ++indice_arg ou indice_arg = indice_arg + 1*/

	}


	return OK; /* Retorna o valor 0 ao Sistema Operacional para indicar que o programa foi executado com sucesso. */

}
