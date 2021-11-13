/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MAIN_TAB_H_INCLUDED
# define YY_YY_MAIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CONSTANTE_REAL = 258,
    CONSTANTE_DECIMAL = 259,
    CONSTANTE_OCTAL = 260,
    CONSTANTE_HEXADECIMAL = 261,
    CONSTANTE_CARACTER = 262,
    IDENTIFICADOR = 263,
    LITERAL_CADENA = 264,
    COMENTARIO_UNA_LINEA = 265,
    COMENTARIO_MULTI_LINEA = 266,
    ESPACIO_EN_BLANCO_O_TABULACION = 267,
    AUTO = 268,
    BREAK = 269,
    CASE = 270,
    CHAR = 271,
    CONST = 272,
    CONTINUE = 273,
    DEFAULT = 274,
    DEFINE = 275,
    DO = 276,
    DOUBLE = 277,
    ELSE = 278,
    ENUM = 279,
    EXTERN = 280,
    FLOAT = 281,
    FOR = 282,
    GOTO = 283,
    IF = 284,
    INT = 285,
    INCLUDE = 286,
    LONG = 287,
    REGISTER = 288,
    RETURN = 289,
    SHORT = 290,
    SIGNED = 291,
    SIZEOF = 292,
    STATIC = 293,
    STRUCT = 294,
    SWITCH = 295,
    TYPEDEF = 296,
    UNION = 297,
    UNSIGNED = 298,
    VOID = 299,
    VOLATILE = 300,
    WHILE = 301,
    IGUAL_IGUAL = 302,
    DISTINTO = 303,
    MENOR_IGUAL = 304,
    MAYOR_IGUAL = 305,
    MAS_MAS = 306,
    MENOS_MENOS = 307,
    MAS_IGUAL = 308,
    MENOS_IGUAL = 309,
    POR_IGUAL = 310,
    DIVISION_IGUAL = 311,
    MODULO_IGUAL = 312,
    AND_IGUAL = 313,
    OR_IGUAL = 314,
    OR_EXCLUSIVO_IGUAL = 315,
    AND_LOGICO = 316,
    OR_LOGICO = 317,
    ELIPSIS = 318,
    CORRIMIENTO_A_IZQUIERDA = 319,
    CORRIMIENTO_A_DERECHA = 320,
    CORRIMIENTO_A_IZQUIERDA_IGUAL = 321,
    CORRIMIENTO_A_DERECHA_IGUAL = 322,
    BARRA_INVERTIDA = 323,
    PUNTERO_FLECHA = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "../src/main.y"

	char* cval;
	int ival;
	double dval;

#line 133 "main.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAIN_TAB_H_INCLUDED  */
