%option noyywrap

%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdbool.h>
    #include <string.h>

    #include "parser.h"
%}

ESPACIO_EN_BLANCO   (" ")+
TABULACION          (\t)+
ESPACIO_EN_BLANCO_O_TABULACION ({ESPACIO_EN_BLANCO}|{TABULACION})+

/*********** COMENTARIOS ***********/
COMENTARIO_UNA_LINEA    (\/\/).*
COMENTARIO_MULTI_LINEA  (\/\*)(.|\n)*(\*\/)
/********* FIN COMENTARIOS *********/

/*********** CONSTANTES ENTERAS ***********/
SUFIJO_UNSIGNED             u|U
SUFIJO_LONG                 l|L
SUFIJO_ENTERO               {SUFIJO_UNSIGNED}|{SUFIJO_LONG}|{SUFIJO_UNSIGNED}{SUFIJO_LONG}|{SUFIJO_LONG}{SUFIJO_UNSIGNED}

DIGITO_DECIMAL              [0-9]
DIGITO_DECIMAL_NO_CERO      [1-9]
CONSTANTE_ENTERA_DECIMAL    {DIGITO_DECIMAL_NO_CERO}{DIGITO_DECIMAL}*{SUFIJO_ENTERO}?

DIGITO_OCTAL                [0-7]
CONSTANTE_ENTERA_OCTAL      0{DIGITO_OCTAL}+{SUFIJO_ENTERO}?

DIGITO_HEXADECIMAL          [0-9a-fA-F]
CONSTANTE_ENTERA_HEXA       (0x|0X){DIGITO_HEXADECIMAL}+{SUFIJO_ENTERO}?
/********* FIN CONSTANTES ENTERAS *********/

/*********** CONSTANTES REALES ***********/
CONSTANTE_REAL              {CONSTANTE_FRACCION}{PARTE_EXPONENTE}?{SUFIJO_REAL}?|{SECUENCIA_DE_DIGITOS}{PARTE_EXPONENTE}{SUFIJO_REAL}?
CONSTANTE_FRACCION          {SECUENCIA_DE_DIGITOS}?\.{SECUENCIA_DE_DIGITOS}|{SECUENCIA_DE_DIGITOS}\.
PARTE_EXPONENTE             (e|E){SIGNO}?{SECUENCIA_DE_DIGITOS}
SIGNO                       \+|-
SECUENCIA_DE_DIGITOS        {DIGITO_DECIMAL}+
SUFIJO_REAL                 f|F|l|L
/********* FIN CONSTANTES REALES *********/

/*********** IDENTIFICADOR ***********/
DIGITO          [0-9]
NO_DIGITO       [_a-zA-Z]
IDENTIFICADOR   {NO_DIGITO}({NO_DIGITO}|{DIGITO})*
/********* FIN IDENTIFICADOR *********/

/*********** PALABRA RESERVADA ***********/
PALABRA_RESERVADA   auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while
/********* FIN PALABRA RESERVADA *********/

/*********** OPERADOR O CARACTER DE PUNTUACION ***********/
OPERADOR_O_CARACTER_PUNTUACION   "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"~"|"!"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"\\"|"\="|"?"|":"|";"|"..."|","|"#"|"##"
/********* FIN OPERADOR O CARACTER DE PUNTUACION *********/

/*********** LITERAL CADENA ***********/
SECUENCIA_DE_ESCAPE_OCTAL           \\{DIGITO_OCTAL}{1,3}
SECUENCIA_DE_ESCAPE_HEXADECIMAL     \\x{DIGITO_HEXADECIMAL}{1,2}
SECUENCIA_DE_ESCAPE_SIMPLE          \\\'|\\\"|\\\?|\\\\|\\a|\\b|\\f|\\n|\\r|\\t|\\v
SECUENCIA_DE_ESCAPE                 {SECUENCIA_DE_ESCAPE_SIMPLE}|{SECUENCIA_DE_ESCAPE_OCTAL}|{SECUENCIA_DE_ESCAPE_HEXADECIMAL}
CARACTER_S                          [^\"\\]|{SECUENCIA_DE_ESCAPE}
SECUENCIA_DE_CARACTERES             {CARACTER_S}+
LITERAL_CADENA                      \"{SECUENCIA_DE_CARACTERES}\"
/********* FIN LITERAL CADENA *********/

/*********** CONSTANTE CARACTER ***********/
CARACTER_C          [^\'\\]|{SECUENCIA_DE_ESCAPE}
CONSTANTE_CARACTER  \'{CARACTER_C}\'
/********* FIN CONSTANTE CARACTER *********/


%%

{CONSTANTE_REAL}                    {;}

{CONSTANTE_ENTERA_DECIMAL}          { yylval.ival = strtol(yytext, NULL, 10); return CONSTANTE_ENTERA_DECIMAL; }

{CONSTANTE_ENTERA_OCTAL}            { yylval.ival = strtol(yytext, NULL, 8); return CONSTANTE_ENTERA_OCTAL; }

{CONSTANTE_ENTERA_HEXA}             { yylval.ival = strtol(yytext, NULL, 16); return CONSTANTE_ENTERA_HEXA; }

{CONSTANTE_CARACTER}                { yylval.idval = strdup(yytext); return CONSTANTE_CARACTER; }

"auto"                              { return AUTO; }
"break"                             { return BREAK; }
"case"                              { return CASE; }
"char"                              { return CHAR; }
"const"                             { return CONST; }
"continue"                          { return CONTINUE; }
"default"                           { return DEFAULT; }
"do"                                { return DO; }
"double"                            { return DOUBLE; }                            
"else"                              { return ELSE; }
"enum"                              { return ENUM;} 
"extern"                            { return EXTERN; }
"float"                             { return FLOAT; }
"for"                               { return FOR; }
"goto"                              { return GOTO; }
"if"                                { return IF; }
"int"                               { return INT; }
"long"                              { return LONG; }
"register"                          { return REGISTER; }
"return"                            { return RETURN; }
"short"                             { return SHORT; }
"signed"                            { return SIGNED; }
"sizeof"                            { return SIZEOF; }
"static"                            { return STATIC; }
"struct"                            { return STRUCT; }
"switch"                            { return SWITCH; }
"typedef"                           { return TYPEDEF; }
"union"                             { return UNION; }
"unsigned"                          { return UNSIGNED; }
"void"                              { return VOID; }
"volatile"                          { return VOLATILE; }
"while"                             { return WHILE; }

"=="                                { return IGUAL_IGUAL; }
"!="                                { return DISTINTO; }
"<="                                { return MENOR_IGUAL; }
">="                                { return MAYOR_IGUAL; }
"++"                                { return MAS_MAS; }
"--"                                { return MENOS_,MENOS; }
"+="                                { return MAS_IGUAL; }
"-="                                { return MENOS_IGUAL; }
"*="                                { return POR_IGUAL; }
"/="                                { return DIVIDIDO_IGUAL; }
"%="                                { return PORCENTAJE_IGUAL; }
"&="                                { return AMPERSAND_IGUAL; }
"^="                                { return CIRCUNFLEJO_IGUAL; }
"&&"                                { return AND; }
"||"                                { return OR; }
"..."                               { return ELIPSIS; }
"<<="                               { return MENOR_MENOR_IGUAL; }
">>="                               { return MAYOR_MAYOR_IGUAL; }
"\\"                                { return BARRA_INVERTIDA; }
"["|"]"|"("|")"|"{"|"}"|"&"|"*"     { return yylex[0]; }
"+"|"-"|"/"|"%"|"<"|">"|"^"|"|"     { return yylex[0]; }
"~"|"!"|"="|"?"|":"|";"|","|"#"|"." { return yylex[0]; }

{IDENTIFICADOR}                     { yylval.idval = strdup(yytext); return IDENTIFICADOR; }

{LITERAL_CADENA}                    { yylval.idval = strdup(yytext); return LITERAL_CADENA; }

{COMENTARIO_UNA_LINEA}              { yylval.idval = strdup(yytext); return COMENTARIO_UNA_LINEA; }

{COMENTARIO_MULTI_LINEA}            { yylval.idval = strdup(yytext); return COMENTARIO_MULTI_LINEA; }

{ESPACIO_EN_BLANCO_O_TABULACION}    { yylval.idval = strdup(yytext); return COMENTARIO_MULTI_LINEA; }

%%

int yywrap(void) {
    return 1;
}
