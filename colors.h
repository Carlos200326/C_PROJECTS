/*
 --------------------------------------------------------
 |						        |
 |	Author =  Carlos Eduardo Cordeiro dos Santos  	|
 |	Brazil, RJ 					|
 | 							|
 | 							|
 |	Date: 03/10/2025				| 
 |							|
 |							|
 |							|
 |							|
 --------------------------------------------------------
 */





/*------------ Definicao de guards (macros) para protecao contra multipla inclusao------------- */
#ifndef CORES

#define CORES

#define BLACK									"\033[30m"
#define RED									"\033[31m"
#define GREEN									"\033[32m"
#define YELLOW									"\033[33m"
#define BLUE									"\033[34m"
#define PURPLE									"\033[35m"
#define CYAN									"\033[36m"



/* ------- Cor em negrito para letras ------- */
#define BLACK_BOLD								"\033[1;30m"
#define RED_BOLD								"\033[1;31m"
#define GREEN_BOLD								"\033[1;32m"
#define YELLOW_BOLD								"\033[1;33m"
#define BLUE_BOLD								"\033[1;34m"
#define PURPLE_BOLD								"\033[1;35m"
#define CYAN_BOLD								"\033[1;36m"

/* ----- Letras sublinhadas ------ */
#define BLACK_SUB								"\033[4;30m"
#define RED_SUB									"\033[4;31m"
#define GREEN_SUB								"\033[4;32m"
#define YELLOW_SUB								"\033[4;33m"
#define BLUE_SUB								"\033[4;34m"
#define PURPLE_SUB								"\033[4;35m"
#define CYAN_SUB								"\033[4;36m"


/* ----- Letras sublinhadas e em negrito ----- */
#define BLACK_SUB_BOLD								"\033[1;4;30m"
#define RED_SUB_BOLD								"\033[1;4;31m"
#define GREEN_SUB_BOLD								"\033[1;4;32m"
#define YELLOW_SUB_BOLD								"\033[1;4;33m"
#define BLUE_SUB_BOLDd								"\033[1;4;34m"
#define PURPLE_SUB_BOLD								"\033[1;4;35m"
#define CYAN_SUB_BOLD								"\033[1;4;36m"

/* ------- Letras em italico -------- */
#define BLACK_ITALIC								"\033[3;30m"
#define RED_ITALIC								"\033[3;31m"
#define GREEN_ITALIC								"\033[3;32m"
#define YELLOW_ITALIC								"\033[3;33m"
#define BLUE_ITALIC								"\033[3;34m"
#define PURPLE_ITALIC								"\033[3;35m"
#define CYAN_ITALIC								"\033[3;36m"



/* ----- Cor normal para fundo ----- */
#define BLACK_BACKGROUND							"\033[40m"
#define RED_BACKGROUND								"\033[41m"
#define GREEN_BACKGROUND							"\033[42m"
#define YELLOW_BACKGROUND							"\033[43m"
#define BLUE_BACKGROUND								"\033[44m"
#define PURPLE_BACKGROUND							"\033[45m"
#define CYRAN_BACKGROUND							"\033[46m"
#define WHITE_BACKGROUND							"\033[47m"

/* ----- Cores intensa para letras ------ */
#define BLACK_INTENSIVE								"\033[90m"
#define RED_INTENSIVE								"\033[91m"
#define GREEN_INTENSIVE								"\033[92m"
#define YELLOW_INTENSIVE							"\033[93m"
#define BLUE_INTENSIVE								"\033[94m"
#define PURPLE_INTENSIVE							"\033[95m"
#define CYRAN_INTENSIVE								"\033[96m"
#define WHITE_INTENSIVE								"\033[97m"


/* ----- Cores intensa para plano de fundo ------- */
#define BLACK_BACKGROUND_INTENSIVE						"\033[100m"
#define RED_BACKGROUND_INTENSIVE						"\033[101m"
#define GREEN_BACKGROUND_INTENSIVE						"\033[102m"
#define YELLOW_BACKGROUND_INTENSIVE						"\033[103m"
#define BLUE_BACKGROUND_INTENSIVE						"\033[104m"
#define PURPLE_BACKGROUND_INTENSIVE						"\033[105m"
#define CYRAN_BACKGROUND_INTENSIVE						"\033[106m"
#define WHITE_BACKGROUND_INTENSIVE						"\033[107m"


#define ESC									"\x1b" /* Forma hexadecimal de 033 */

/* ------ Reseta as cores do terminal para o modo normal ------ */
#define RESET									"\033[0m"



#endif /* Termino da estrutura de verificacao de guard */
