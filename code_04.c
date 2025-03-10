#include <stdio.h>  /* Inclusao da biblioteca de entrada e saida padrao de dados */

#define OK							0X00

int	
main(int argc, char **argv) /* Definicao da funcao main */
{

	/* Declaracao de variaveis */
  	int var;

	/* Inicializacao de variaveis */
	var = 0;

	printf("\nNumero de argumentos recebidos pelo programa: %d\n",argc);

	/* Lista todos os argumentos recebidos pelo terminal, usa-se a aritmetica de ponteiros, em que percorremos na memoria incrementando uma unidade
	  de endereco. */
	while(*argv!=NULL)
	{

		printf("\n%s\n",*argv);
		argv++;
	}

	while(var < 100)
	{

		printf("var vale %d\n",var);
		var++; /* var = var + 1 ou ++var
		A diferenca de ++var para var++, e que no primeiro momento incrementamos uma unidade a var e depois acessamos o valor que esta em var,
		enquanto que no segundo caso, primeiro acessamos a posicao da memoria nomeada por var e depois incrementamos em uma unidade
		o valor que estiver nela armazenado. No caso, a utilizacao do valor, ocorrerra quando houver o operador de atribuicao anteriormente ao nome
		da variavel var.
		*/

	}


	return OK; /* Retorna 0 ao Sistema Operacional indicando sucesso na execucao do programa.*/

}
