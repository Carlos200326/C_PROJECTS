#include <stdio.h> /* Inclusao da biblioteca de entrada e saida padrao de dados. */
#include <stdlib.h> /* Inclusao da biblioteca padrao.*/

#define OK							0X00

int 
main(int argc, char **argv)
{

	 /* Declaracao de variaveis */
	char carro_marca;
	int corsa, palio, prisma, renault, ford, outros;
	

	/* Inicializacao de variaveis */

	corsa = 0, palio = 0, prisma = 0, renault = 0, ford = 0, outros = 0;

	printf("\nDigite uma letra: \n");
	carro_marca =  fgetc(stdin); /* Captura caracteres do teclado. */

	/* Criando a estrutura switch para registro de quantidade de veiculos por marca. */

	switch(carro_marca)
	{

		case 'C':
		case 'c':

			corsa++;

		break;

		case 'p':

			palio++;
		break;

		case 'P':
			prisma++;
		break;

		case 'r':
		case 'R':
			
			renault++;
		break;

		case 'f':
		case 'F':

			ford++;
		break;

		default:

			outros++;

	}

	/* Imprime no console (saida padrao de dados) a quantidade de argumentos recebidos pelo programa atraves do terminal e o primeiro argumento
	   que e o diretorio do programa incluindo o seu nome. */
	printf("\nNumero de argumentos recebidos pelo programa: %i, argv[0] = %s\n",argc,argv[0]);

	printf("\nNumeros de carros:\n");
	printf("\nCorsa = %i\nPalio = %i\nPrisma = %i\nRenault = %i\nFord = %i\nOutros: %i\n",corsa,palio,prisma,renault,ford,outros);


	return OK; /* Retorna 0 ao Sistema Operacional indicando que o programa foi executado sem erros. */

}
