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

	printf("\nInteiros a = %d, b = %d \n Soma = %d \n Media = %f\n", a,b ,soma,media);

	printf("\nNumero de argumentos recebidos = %d. Argv[0] = %s\n",argc,argv[0]);

	return OK;

}
