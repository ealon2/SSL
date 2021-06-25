%option noyywarp
%option yylineno

%{
    //includes
%}
ESPACIO_EN_BLANCO   (" ")+
TABULACION          (\t)+
/* PALABRA RESERVADA */
PALABRA_RESERVADA   auto|break|case|char|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while
NO_DIGITO           [_a-zA-Z]
DIGITO              [0-9]
/* IDENTIFICADOR */
IDENTIFICADOR       {NO_DIGITO}({NO_DIGITO}|{DIGITO})*
/* OPERADOR O CARACTER DE PUNTUACIÓN */
OPERADOR_O_CARACTER_DE_PUNTUACION   "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|"?"|":"|";"|"..."|","|"#"|"##"
%%
{ESPACIO_EN_BLANCO}|{TABULACION}    {;//ignora los espacios en blanco y las tabulaciones}
                                    {;}
%%
int main()
{
    return 0;
}