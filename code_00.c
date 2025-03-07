#include <stdio.h>  /* Inclui a biblioteca que possui as funcoes padroes de entrada e saida  */

#define OK 							0X00
/* Chama-se o pre-processamento para substituir toda a ocorrencia de OK por 0 (em hexadecimal), 
   este valor serah utilizado para indicar que o programa foi executado sem erros ao
   Sistema Operacional. */


int  /* Tipo de valor retornado pela funcao */
main(int argc, char **argv)
{

	/* Instrucao para imprimir no console: o texto delimitado pelas aspas. */
	/* Imprimimos uma frase de boas-vindas em programacao primeiramente
	   em Portugues e posteriormente em Ingles.*/
	printf("\nHello, World\n");
	printf("\nOla, mundo\n");


	/* Exibimos no console a quantidade de argumentos passados
	 para a  funcao main junto a chamada do programa
	 E exibimos o primeiro argumento de argv que correspondera ao
	 caminho (diretorio) do programa acompanhado do seu respectivo nome.*/

	printf("\nNumero de argumentos recebidos pelo terminal: %d\n"
		"\nArg [0]: %s\n", argc, argv[0]);

	return OK;

}
