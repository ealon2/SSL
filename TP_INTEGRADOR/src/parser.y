/* Calculadora de notacion polaca inversa */

%{
	#include <math.h>
	#include <stdio.h>
	#include <ctype.h>

	int yylex(void);
	int yyerror (char *s);

	extern FILE* yyin;
	extern int yylineo;
%}

%union {
	char* idval;
	int ival;
}

%token <    > CONSTANTE_REAL
%token <ival> CONSTANTE_ENTERA_DECIMAL
%token <ival> CONSTANTE_ENTERA_OCTAL
%token <ival> CONSTANTE_ENTERA_HEXA
%token <ival> CONSTANTE_ENTERA_DECIMAL

%token <idval>

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR
%token GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITHC TYPEDEF
%token UNION UNSIGNED VOID VOLATILE WHILE
%token IGUAL_IGUAL DISTINTO MENOR_IGUAL MAYOR_IGUAL MAS_MAS MENOS_MENOS
%token MAS_IGUAL MENOS_IGUAL POR_IGUAL DIVIDIDO_IGUAL PORCENTAJE_IGUAL AMPERSAND_IGUAL CIRCUNFLEJO_IGUAL
%token AND OR ELIPSIS MENOR_MENOR_IGUAL MAYOR_MAYOR_IGUAL BARRA_INVERTIDA
%left '+' '-'
%left '*' '/'

%start unidad_De_programa

%% 

%%

int main(int argc, char* argv[]) {

    FILE* file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error al abrir input/archivo.\n");
        return 1;
    }
    yyin = file;

	yyparse();
	
	return 0;
}

int yyerror(char* msg) {
	printf("\nFallo el analisis en la linea %d %s \n", yylineo, msg);
	return 0;
}


