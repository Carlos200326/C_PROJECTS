#include <stdio.h>

#define OK					0X00

int 
main(int argc, char **argv) 
{


	/* Espaco de declaracao de variaveis  */

	int a, b, soma;
	float media;

	a = 67;
	b = 26;

	soma = a + b;
	media = soma / 2.0; /* Divisao pelo numero em decimal,
	pois em C, a divisao entre dois inteiros e interpretada como
	um inteiro, por isto, a fim de que o resultado gerado seja 
	condizente com a possibilidade de se gerar um numero racional, realizamos a 
	a divisao por um numero com casal decimal, a fim de forcar
	na etapa de compilacao a geracao do resultado na forma
	de float sem que haja truncamento (processo de remocao de valores
	que ocorre apos o '.' quando ha divisao entre dois inteiros) */

	/* Imprime na saida padrao de dados (console) a soma
	 e a media dois inteiros a e b. */

	printf("\nInteiros a = %d, b = %d\nSoma = %d\nMedia = %f\n", a,b ,soma,media);

	printf("\nNumero de argumentos recebidos = %d. Argv[0] = %s\n",argc,argv[0]);

	/* Imprime no console (saida padrao de dados) a quantidade de  memoria em bytes ocupada pelas
	   variaveis a, b, soma e media. */

	printf("\nVariavel a ocupa %lu bytes na memoria. Variavel b ocupa %lu bytes na memoria e variavel soma ocupa %lu bytes na memoria.\n",
			sizeof(a),sizeof(b),sizeof(soma));

	printf("\nA variavel media ocupa %lu bytes na memoria.\n", sizeof(media));


	return OK; /* Instrucao que quando executada retorna o valor 0 ao Sistema Operacional indicando que o programa foi executado sem erros.
	Ou seja, significa que se conseguiu alcancar o objetivo do programa. */

}
