/* Calculadora de notacion polaca inversa */

%{
	#include <math.h>
	#include <stdio.h>
	#include <ctype.h>
	#include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>

	extern FILE* yyin;
	extern int yylineno;

	int yylex(void);

	int yywrap(){
		return 1;
	}

	int yyerror(char* msg) {
		//printf("\nFallo el analisis en la linea %d: %s \n", yylineno, msg);
		return 0;
	}


%}

%union {
	char* cval;
	int ival;
	double dval;
}

%token <dval> CONSTANTE_REAL
%token <ival> CONSTANTE_DECIMAL
%token <ival> CONSTANTE_OCTAL
%token <ival> CONSTANTE_HEXADECIMAL

%token <cval> CONSTANTE_CARACTER
%token <cval> IDENTIFICADOR
%token <cval> LITERAL_CADENA
%token <cval> COMENTARIO_UNA_LINEA
%token <cval> COMENTARIO_MULTI_LINEA
%token <cval> ESPACIO_EN_BLANCO_O_TABULACION

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DEFINE DO DOUBLE ELSE ENUM EXTERN FLOAT FOR
%token GOTO IF INT INCLUDE LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF
%token UNION UNSIGNED VOID VOLATILE WHILE

%token IGUAL_IGUAL DISTINTO MENOR_IGUAL MAYOR_IGUAL MAS_MAS MENOS_MENOS
%token MAS_IGUAL MENOS_IGUAL POR_IGUAL DIVISION_IGUAL MODULO_IGUAL AND_IGUAL OR_IGUAL OR_EXCLUSIVO_IGUAL
%token AND_LOGICO OR_LOGICO ELIPSIS CORRIMIENTO_A_IZQUIERDA CORRIMIENTO_A_DERECHA CORRIMIENTO_A_IZQUIERDA_IGUAL CORRIMIENTO_A_DERECHA_IGUAL BARRA_INVERTIDA PUNTERO_FLECHA

%left '+' '-'
%left '*' '/'
%nonassoc IF
%nonassoc ELSE

%start unidad_de_programa

%% 
	unidad_de_programa: /* vacio */ { printf("vacio \n"); }                                       
					| unidad_de_programa unidad_de_traduccion  { printf("unidad_de_programa: unidad_de_traduccion \n"); }
					| error unidad_de_traduccion { printf("ERROR... \n"); }
					;
	unidad_de_traduccion: declaracion_externa  { printf("unidad_de_traduccion: declaracion_externa \n"); }
					| sentencia                                                                                                                                       
					;
	declaracion_externa: definicion_de_funcion  { printf("declaracion_externa: definicion_de_funcion \n"); }                                        
					| declaracion  { printf("declaracion_externa: declaracion \n"); }                                             
					;
	definicion_de_funcion: especificadores_de_declaracion declarador lista_de_declaracion sentencia_compuesta  { printf("definicion_de_funcion: especificadores_de_declaracion declarador lista_de_declaracion sentencia_compuesta \n"); }                                         
					| declarador lista_de_declaracion sentencia_compuesta  { printf("definicion_de_funcion: declarador lista_de_declaracion sentencia_compuesta \n"); }                                        
					| especificadores_de_declaracion declarador sentencia_compuesta  { printf("definicion_de_funcion: especificadores_de_declaracion declarador sentencia_compuesta \n"); }                                                   
					| declarador sentencia_compuesta  { printf("definicion_de_funcion: declarador sentencia_compuesta \n"); }                                      
					;
	declaracion: especificadores_de_declaracion lista_declaradores_init ';'  { printf("declaracion: especificadores_de_declaracion lista_declaradores_init ; \n"); }                                                    
			| especificadores_de_declaracion ';'  { printf("declaracion: especificadores_de_declaracion ; \n"); }                                          
			;
	lista_de_declaracion:declaracion { printf("lista_de_declaracion: declaracion \n"); }                                  
						| lista_de_declaracion declaracion  { printf("lista_de_declaracion: lista_de_declaracion declaracion \n"); }                                      
						;
	especificadores_de_declaracion: especificador_categoria_almacenamiento especificadores_de_declaracion  { printf("especificadores_de_declaracion:  especificador_categoria_almacenamiento especificadores_de_declaracion \n"); }                                         
			| especificador_categoria_almacenamiento  { printf("especificadores_de_declaracion: especificador_categoria_almacenamiento \n"); }                                        
			| especificador_de_tipo especificadores_de_declaracion  { printf("especificadores_de_declaracion: especificador_de_tipo especificadores_de_declaracion \n"); }                                                                   
			| especificador_de_tipo { printf("especificadores_de_declaracion: especificador_de_tipo \n"); }                                                                              
			| calificador_de_tipo especificadores_de_declaracion  { printf("especificadores_de_declaracion: calificador_de_tipo especificadores_de_declaracion \n"); }                                       
			| calificador_de_tipo { printf("especificadores_de_declaracion: calificador_de_tipo \n"); }
			;
	especificador_categoria_almacenamiento: AUTO { printf("especificador_categoria_almacenamiento: AUTO \n"); }
										|REGISTER  { printf("especificador_categoria_almacenamiento: REGISTER \n"); }
										|STATIC  { printf("especificador_categoria_almacenamiento: STATIC \n"); }
										|EXTERN  { printf("especificador_categoria_almacenamiento: EXTERN \n"); }
										|TYPEDEF  { printf("especificador_categoria_almacenamiento: TYPEDEF \n"); }
										;
	especificador_de_tipo: INT { printf("especificador_de_tipo: INT \n"); }                                             
						|CHAR  { printf("especificador_de_tipo: CHAR \n"); }                                       
						|FLOAT { printf("especificador_de_tipo: FLOAT \n"); }                                      
						|DOUBLE { printf("especificador_de_tipo: DOUBLE \n"); }                                        
						|SHORT  { printf("especificador_de_tipo: SHORT \n"); }                                      
						|VOID  { printf("especificador_de_tipo: VOID \n"); }                                      
						|LONG  { printf("especificador_de_tipo: LONG \n"); }                                      
						|SIGNED  { printf("especificador_de_tipo: SIGNED \n"); }                                       
						|UNSIGNED  { printf("especificador_de_tipo: UNSIGNED \n"); }                                                                            
						|especificador_estructura_o_union  { printf("especificador_de_tipo: especificador_estructura_o_union \n"); }                                    
						|especificador_enum  { printf("especificador_de_tipo: especificador_enum \n"); }                                      
						|nombre_typedef  { printf("especificador_de_tipo: nombre_typedef \n"); }                                      
						;
	calificador_de_tipo: CONST  { printf("calificador_de_tipo: CONST \n"); }                                        
					| VOLATILE  { printf("calificador_de_tipo: VOLATILE \n"); }                                       
					;
	especificador_estructura_o_union: estructura_o_union IDENTIFICADOR '{' lista_declaraciones_struct '}'  { printf("especificador_estructura_o_union: estructura_o_union IDENTIFICADOR '{' lista_declaraciones_struct '}' \n"); }                                         
									| estructura_o_union '{' lista_declaraciones_struct '}'  { printf("especificador_estructura_o_union: estructura_o_union '{' lista_declaraciones_struct '}' \n"); }                                       
									| estructura_o_union IDENTIFICADOR  { printf("especificador_estructura_o_union: estructura_o_union IDENTIFICADOR \n"); }                                        
									;
	estructura_o_union: STRUCT  { printf("estructura_o_union: STRUCT \n"); }                                       
					| UNION     { printf("estructura_o_union: UNION \n"); }                                    
					;
	lista_declaraciones_struct: declaracion_struct  { printf("lista_declaraciones_struct: declaracion_struct \n"); }                 
							| lista_declaraciones_struct declaracion_struct  { printf("lista_declaraciones_struct: lista_declaraciones_struct declaracion_struct \n"); }                                        
							;
	lista_declaradores_init: declarador_init  { printf("lista_declaradores_init: declarador_init \n"); }                                    
						| lista_declaradores_init ',' declarador_init  { printf("lista_declaradores_init: lista_declaradores_init \n"); }                                    
						;
	declarador_init: declarador { printf("declarador_init: declarador \n"); }                                      
					| declarador '=' inicializador { printf("declarador_init: declarador '=' inicializador \n"); }                                      
					;
	declaracion_struct: lista_calificador_especificador lista_declaradores_struct ';' { printf("declaracion_struct: lista_calificador_especificador lista_declaradores_struct ';' \n"); }                 
						;
	lista_calificador_especificador: especificador_de_tipo lista_calificador_especificador  { printf("lista_calificador_especificador: especificador_de_tipo lista_calificador_especificador \n"); }               
									| especificador_de_tipo  { printf("lista_calificador_especificador: especificador_de_tipo \n"); }                
									| calificador_de_tipo lista_calificador_especificador  { printf("lista_calificador_especificador: calificador_de_tipo lista_calificador_especificador \n"); }                
									| calificador_de_tipo  { printf("lista_calificador_especificador: calificador_de_tipo \n"); }                
									;
	lista_declaradores_struct: declarador_struct { printf("lista_declaradores_struct: declarador_struct \n"); }                
							| lista_declaradores_struct ',' declarador_struct { printf("lista_declaradores_struct: lista_declaradores_struct ',' declarador_struct \n"); }                 
							;
	declarador_struct: declarador  { printf("declarador_struct: declarador \n"); }                 
					| declarador ':' expresion_constante { printf("declarador_struct: declarador ':' expresion_constante \n"); }                 
					| ':' expresion_constante  { printf("declarador_struct: ':' expresion_constante \n"); }                 
					;
	especificador_enum: ENUM IDENTIFICADOR '{' lista_de_enumerador '}' { printf("especificador_enum: ENUM IDENTIFICADOR '{' lista_de_enumerador '}' \n"); }                                     
					| ENUM '{' lista_de_enumerador '}'  { printf("especificador_enum: ENUM '{' lista_de_enumerador '}' \n"); }                 
					| ENUM IDENTIFICADOR  { printf("especificador_enum: ENUM IDENTIFICADOR \n"); }                                   
					;
	lista_de_enumerador: enumerador  { printf("lista_de_enumerador: enumerador \n"); }                 
						| lista_de_enumerador ',' enumerador { printf("lista_de_enumerador ',' enumerador \n"); }                 
						;
	enumerador: IDENTIFICADOR  { printf("enumerador: IDENTIFICADOR \n"); }                                   
				| IDENTIFICADOR '=' expresion_constante  { printf("enumerador: IDENTIFICADOR '=' expresion_constante \n"); }                                           
				;
	declarador: apuntador declarador_directo  { printf("declarador: apuntador declarador_directo\n"); }               
				| declarador_directo  { printf("declarador: declarador_directo \n"); }                 
				;
	declarador_directo: IDENTIFICADOR  { printf("declarador_directo: IDENTIFICADOR \n"); }                                                                               
					| '(' declarador ')'  { printf("declarador_directo: '(' declarador ')' \n"); }                                                                       
					| declarador_directo '[' expresion_constante  ']'  { printf("declarador_directo: declarador_directo '[' expresion_constante  ']' \n"); }                                                        
					| declarador_directo '['  ']'  { printf("declarador_directo: declarador_directo '['  ']'  \n"); }
					| declarador_directo '(' lista_tipos_de_parametro ')'  { printf("declarador_directo: '(' lista_tipos_de_parametro ')' \n"); }                                                
					| declarador_directo '(' lista_de_identificadores ')'  { printf("declarador_directo: '(' lista_de_identificadores ')' \n"); }                                                            
					| declarador_directo '('  ')'  { printf("declarador_directo: declarador_directo '('  ')' \n"); }                            
					;
	apuntador: '*' lista_calificadores_de_tipo  { printf("apuntador: '*' lista_calificadores_de_tipo\n"); }
			| '*' apuntador lista_calificadores_de_tipo  { printf("apuntador: '*' apuntador lista_calificadores_de_tipo\n"); }
			| '*' apuntador  { printf("apuntador: '*' apuntador\n"); }
			| '*' { printf("apuntador: '*'\n"); }
			;
	lista_calificadores_de_tipo: calificador_de_tipo  { printf("lista_calificadores_de_tipo: calificador_de_tipo\n"); }                                     
							| lista_calificadores_de_tipo calificador_de_tipo  { printf("lista_calificadores_de_tipo: lista_calificadores_de_tipo calificador_de_tipo\n"); }                       
							;
	lista_tipos_de_parametro:  lista_de_parametros  { printf("lista_tipos_de_parametro:  lista_de_parametros\n"); }                                  
							| lista_de_parametros ',' ELIPSIS  { printf("lista_de_parametros ',' ELIPSIS\n"); }                                   
							;
	lista_de_parametros: declaracion_de_parametro  { printf("lista_de_parametros: declaracion_de_parametro\n"); }                                    
						| lista_de_parametros ',' declaracion_de_parametro  { printf("lista_de_parametros: lista_de_parametros ',' declaracion_de_parametro\n"); }                                    
						;
	declaracion_de_parametro:  especificadores_de_declaracion declarador  { printf("declaracion_de_parametro: especificadores_de_declaracion declarador\n"); }                                     
			| especificadores_de_declaracion declarador_abstracto  { printf("declaracion_de_parametro: especificadores_de_declaracion declarador_abstracto\n"); }                                     
			| especificadores_de_declaracion  { printf("declaracion_de_parametro: especificadores_de_declaracion\n"); }                                       
			;
	lista_de_identificadores:  IDENTIFICADOR  { printf("lista_de_identificadores:  IDENTIFICADOR\n"); }                          
			| lista_de_identificadores ',' IDENTIFICADOR                                     
			;
	inicializador: expresion_de_asignacion  { printf("inicializador: expresion_de_asignacion\n"); }                                      
				| '{' lista_de_inicializadores'}' { printf("inicializador: {' lista_de_inicializadores'}'\n"); }                                  
				| '{' lista_de_inicializadores',' '}' { printf("inicializador: '{' lista_de_inicializadores',' '}'\n"); }                                     
				;
	lista_de_inicializadores: inicializador  { printf("lista_de_inicializadores: inicializador\n"); }                                      
					| lista_de_inicializadores',' inicializador  { printf("lista_de_inicializadores: lista_de_inicializadores',' inicializador\n"); }                                     
					;
	nombre_de_tipo: lista_calificador_especificador declarador_abstracto                                  
				| lista_calificador_especificador                                    
				;
	declarador_abstracto: apuntador                                        
						| apuntador declarador_abstracto_directo                                          
						| declarador_abstracto_directo                                     
						;
	declarador_abstracto_directo:'(' declarador_abstracto ')'                                       
					| declarador_abstracto_directo '[' expresion_constante ']'                                 
					| '[' expresion_constante ']'
					| declarador_abstracto_directo '[' ']'
					| '[' ']'
					| declarador_abstracto_directo '(' lista_tipos_de_parametro ')'
					| '(' lista_tipos_de_parametro ')'
					| declarador_abstracto_directo '(' ')'
					| '(' ')'
					;
	nombre_typedef: 't'
				;
	sentencia: sentencia_etiquetada                                             
			| sentencia_expresion                                          
			| sentencia_compuesta                                      
			| sentencia_de_seleccion                                     
			| sentencia_de_iteracion 
			| sentencia_de_salto 
			;
	sentencia_etiquetada: IDENTIFICADOR ':' sentencia                                        
						| CASE expresion_constante  ':' sentencia                  
						| DEFAULT ':' sentencia                  
						;
	sentencia_expresion: expresion ';'                                     
					| ';'                                  
					;
	sentencia_compuesta: '{' lista_de_declaracion lista_de_sentencias  '}'                  
					| '{' lista_de_sentencias  '}'                                                                           
					| '{' lista_de_declaracion   '}'                                                                                 
					| '{' '}'                                                                              
					;
	lista_de_sentencias: sentencia                                                                                          
					| lista_de_sentencias  sentencia                                                                                
					;
	sentencia_de_seleccion: IF '(' expresion ')' sentencia                                     
					| IF '(' expresion ')' sentencia ELSE sentencia                 
					| SWITCH '(' expresion ')' sentencia                                      
					;
	sentencia_de_iteracion: WHILE '(' expresion ')' sentencia                                   
					| DO sentencia WHILE '(' expresion ')' ';'                                      
					| FOR '(' expresion ';' expresion ';' expresion ')' sentencia                  
					| FOR '(' expresion ';' expresion ';'    ')' sentencia                                       
					| FOR '(' expresion ';' ';' expresion ')' sentencia                                    
					| FOR '(' expresion ';' ';' ')' sentencia                                  
					| FOR '(' ';' expresion ';' expresion ')' sentencia                                       
					| FOR '(' ';' expresion ';' ')' sentencia                                      
					| FOR '(' ';' ';' expresion ')' sentencia                                    
					| FOR '(' ';' ';' ')' sentencia                                   
					;
	sentencia_de_salto: GOTO IDENTIFICADOR ';'                                 
					| CONTINUE ';'                                  
					| BREAK ';'                                       
					| RETURN expresion ';'                                     
					| RETURN ';'                                       
					;
	expresion: expresion_de_asignacion                                       
			| expresion ',' expresion_de_asignacion                                       
			;
	expresion_de_asignacion: expresion_condicional  { printf("expresion_de_asignacion: expresion_condicional \n"); }                                 
						| expresion_unaria operador_de_asignacion expresion_de_asignacion  { printf("expresion_de_asignacion: expresion_unaria operador_de_asignacion expresion_de_asignacion \n"); }               
						;
	operador_de_asignacion:  POR_IGUAL                           
							|DIVISION_IGUAL                                    
							|MAS_IGUAL                                       
							|MENOS_IGUAL                                         
							|MODULO_IGUAL                                      
							|CORRIMIENTO_A_IZQUIERDA_IGUAL                                      
							|CORRIMIENTO_A_DERECHA_IGUAL                                          
							|AND_IGUAL               
							|OR_IGUAL                        
							|OR_EXCLUSIVO_IGUAL                             
							| '='                                         
							;
	expresion_condicional: expresion_logica_or { printf("expresion_condicional: expresion_logica_or\n"); }                                     
						| expresion_logica_or '?' expresion ':' expresion_condicional  { printf("expresion_condicional: expresion_logica_or '?' expresion ':' expresion_condicional\n"); }                                      
						;  
	expresion_constante: expresion_condicional  { printf("expresion_constante: expresion_condicional\n"); }                                     
					;
	expresion_logica_or: expresion_logica_and { printf("expresion_logica_or: expresion_logica_and\n"); }                                 
					| expresion_logica_or OR_LOGICO expresion_logica_and  { printf("expresion_logica_or: expresion_logica_or OR_LOGICO expresion_logica_and\n"); }               
					;
	expresion_logica_and: expresion_or_inclusivo  { printf("expresion_logica_and: expresion_or_inclusivo\n"); }                                       
						| expresion_logica_and AND_LOGICO expresion_or_inclusivo  { printf("expresion_logica_and: expresion_logica_and AND_LOGICO expresion_or_inclusivo\n"); }                                  
						;
	expresion_or_inclusivo: expresion_or_exclusivo  { printf("expresion_or_inclusivo: expresion_or_exclusivo\n"); }                                       
						| expresion_or_inclusivo '|' expresion_or_exclusivo  { printf("expresion_or_inclusivo: expresion_or_inclusivo '|' expresion_or_exclusivo\n"); }                                 
						;
	expresion_or_exclusivo: expresion_and  { printf("expresion_or_exclusivo: expresion_and\n"); }                                
						| expresion_or_exclusivo '^' expresion_and   { printf("expresion_or_exclusivo: expresion_or_exclusivo '^' expresion_and\n"); }                                   
						;
	expresion_and: expresion_de_igualdad  { printf("expresion_and: expresion_de_igualdad\n"); }                                     
				| expresion_and '&' expresion_de_igualdad   { printf("expresion_and: expresion_and '&' expresion_de_igualdad\n"); }                                    
				;
	expresion_de_igualdad: expresion_relacional  { printf("expresion_de_igualdad: expresion_relacional\n"); }                                      
						| expresion_de_igualdad IGUAL_IGUAL expresion_relacional  { printf("expresion_de_igualdad: expresion_de_igualdad IGUAL_IGUAL expresion_relacional\n"); }                 
						| expresion_de_igualdad DISTINTO expresion_relacional  { printf("expresion_de_igualdad: expresion_de_igualdad DISTINTO expresion_relacional\n"); }                                      
						;
	expresion_relacional: expresion_aditiva  { printf("expresion_relacional: expresion_de_corrimiento\n"); }                                   
						| expresion_relacional '<' expresion_de_corrimiento { printf("expresion_relacional: expresion_relacional '<' expresion_de_corrimiento\n"); }                                       
						| expresion_relacional '>' expresion_de_corrimiento  { printf("expresion_relacional: expresion_relacional '>' expresion_de_corrimiento\n"); }                                     
						| expresion_relacional MENOR_IGUAL expresion_de_corrimiento  { printf("expresion_relacional: expresion_relacional MENOR_IGUAL expresion_de_corrimiento\n"); }                                      
						| expresion_relacional MAYOR_IGUAL expresion_de_corrimiento  { printf("expresion_relacional: expresion_relacional MAYOR_IGUAL expresion_de_corrimiento\n"); }                                   
						;
	expresion_de_corrimiento: expresion_aditiva  { printf("expresion_de_corrimiento: expresion_aditiva\n"); }  // volar todo esto, agregar expresion_aditiva en expresion_relacional                                 
							| expresion_de_corrimiento CORRIMIENTO_A_IZQUIERDA expresion_aditiva                                        
							| expresion_de_corrimiento CORRIMIENTO_A_DERECHA expresion_aditiva                                       
							;
	expresion_aditiva: expresion_multiplicativa  { printf("expresion_aditiva: expresion_multiplicativa\n"); }                                    
								| expresion_aditiva '+' expresion_multiplicativa                                      
								| expresion_aditiva '-' expresion_multiplicativa                                      
								;
	expresion_multiplicativa: expresion_cast { printf("expresion_multiplicativa: expresion_cast\n"); }                                     
							| expresion_multiplicativa '*' expresion_cast                                       
							| expresion_multiplicativa '/' expresion_cast                                        
							| expresion_multiplicativa '%' expresion_cast                                         
							;
	expresion_cast: expresion_unaria  { printf("expresion_cast: expresion_unaria\n"); }                                    
				| '(' nombre_de_tipo ')' expresion_cast                                     
				;
	expresion_unaria: expresion_posfija  { printf("expresion_unaria: expresion_posfija\n"); }                                      
					| MENOS_MENOS  expresion_unaria                                
					| MAS_MAS expresion_unaria                                 
					| operador_unario  expresion_cast                                      
					| SIZEOF expresion_unaria                                     
					| SIZEOF '(' nombre_de_tipo ')'                                       
					;
	operador_unario: '&'                                       
				| '*'                                      
				| '+'                                   
				| '-'                                      
				| '~'                                   
				| '!'                                                    
				;
	expresion_posfija: expresion_primaria  { printf("expresion_posfija: expresion_primaria\n"); }                                         
					| expresion_posfija '[' expresion ']'
					| expresion_posfija '(' lista_expresiones_argumento ')' 
					| expresion_posfija '(' ')' 
					| expresion_posfija '.' IDENTIFICADOR 
					| expresion_posfija PUNTERO_FLECHA IDENTIFICADOR 
					| expresion_posfija MENOS_MENOS 
					| expresion_posfija MAS_MAS 
					;
	expresion_primaria: IDENTIFICADOR  { printf("expresion_primaria: IDENTIFICADOR \n"); }                                     
					| constante   { printf("expresion_primaria: constante \n"); }                                        
					| LITERAL_CADENA  { printf("expresion_primaria: LITERAL_CADENA \n"); }                                    
					| '(' expresion')' { printf("expresion_primaria: '(' expresion')' \n"); } 
					;
	lista_expresiones_argumento: expresion_de_asignacion 
							| lista_expresiones_argumento ',' expresion_de_asignacion 
							;
	constante: CONSTANTE_OCTAL 
			| CONSTANTE_HEXADECIMAL  
			| CONSTANTE_DECIMAL                                            
			| CONSTANTE_CARACTER  
			| CONSTANTE_REAL 
			| ENUM 
			;
%%

int main() {
	FILE* file = fopen("input/archivo.c", "r");

    if (file == NULL) {
        printf("Error al abrir input/archivo.c\n");
        return 1;
    }
    yyin = file;

	yyparse();
	return 0;
}




