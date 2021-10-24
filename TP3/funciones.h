#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// enum para asignarle un número a cada tipo de token
enum tipoToken
{
    palabraReservada = 1,
    identificador = 2,
    operadorOCaracterDePuntuacion = 3,
    literalCadena = 4,
    constanteOctal = 5
};

// estructura nodo para guardar cada token
typedef struct nodo
{
    int numeroDeLinea;
    enum tipoToken token;
    char *texto;
    int longitudTexto;

    struct nodo *siguiente;
} NODO;

// Para que cada token se agregue una sola vez a la lista uso la funcion buscarEnLista que devuelve 0 si el token NO está y devuelve 1 si el token SI está
int buscarEnLista(NODO *lista, char *texto);

// Para insertar un nodo final de la lista si NO aparece en la lista
void insertarAlFinalDeLaLista(NODO **lista, int numeroDeLinea, enum tipoToken token, char *texto, int longitudTexto);

// Longitud máxima del texto de un token, lo voy a usar para alinear la tabla
int longitudMaximaTexto(NODO *lista);

// Imprimo la lista de tokens
void imprimirListaEnArchivo(FILE *archivo, NODO *lista);

// Libero memoria ocupada por lista
void liberarMemoriaLista(NODO *lista);