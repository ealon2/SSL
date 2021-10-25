#include <stdio.h>
#include "lex.yy.c"

/**
 * @brief Realiza un analisis lexico de un archivo de texto.
 * Dicho analisis se realiza caracter a caracter.
 * @return int 
 * Retorna 1 si detecto algun error, 0 en caso de procesarse
 * correctamente el archivo.
 */
int analizador_lexico(char file_path []){
    
}

int main (char argv [], int argc){
    
    /* abro archivo de reporte donde escribo tabla */
    FILE* reporte = fopen("reporte.txt","w+");

    /* lectura de "ejemplo27.c" */
    yyin = fopen("ejemplo27.c", "r+");

    /* invoco al analizador */
    yylex();

    /* imprimo tabla */
    imprimirListaEnArchivo(reporte,lista);

    /* libero memoria */
    liberarMemoriaLista(lista);

    /* cierro archivo reporte */
    fclose(reporte);

    return 0;
}