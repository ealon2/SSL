#include "funciones.h"

int buscarEnLista(NODO *lista, char *texto)
{
    NODO *aux = lista;

    while (aux != NULL)
    {
        if (strcmp(aux->texto, texto) == 0)
            return 1;

        aux = aux->siguiente;
    }

    return 0;
}

void insertarAlFinalDeLaLista(NODO **lista, int numeroDeLinea, enum tipoToken token, char *texto, int longitudTexto)
{
    if (buscarEnLista(*lista, texto) == 0)
    {
        NODO *actual = *lista;
        NODO *nuevo = (NODO *)malloc(sizeof(NODO));

        nuevo->numeroDeLinea = numeroDeLinea;
        nuevo->token = token;
        nuevo->texto = strdup(texto);
        nuevo->longitudTexto = longitudTexto;

        if (*lista == NULL)
        {
            nuevo->siguiente = *lista;
            *lista = nuevo;
        }
        else
        {
            while (actual->siguiente != NULL)
            {
                actual = actual->siguiente;
            }

            nuevo->siguiente = actual->siguiente;
            actual->siguiente = nuevo;
        }
    }
}

int longitudMaximaTexto(NODO *lista)
{
    NODO *aux = lista;
    int maximo = 0;

    while (aux != NULL)
    {
        if (aux->longitudTexto > maximo)
        {
            maximo = aux->longitudTexto;
        }

        aux = aux->siguiente;
    }

    return maximo;
}

void imprimirListaEnArchivo(FILE *archivo, NODO *lista)
{
    int i, longMaxima;
    NODO *temp = lista;

    longMaxima = longitudMaximaTexto(lista);

    fprintf(archivo, "\n_________________________________________________________________________________________________________________________\n\n");
    fprintf(archivo, "\t\tNRO.LINEA\t\tLEXEMA");

    // para alinear tabla
    for (i = 0; i < (longMaxima - strlen("TOKEN")); i++)
    {
        fprintf(archivo, " ");
    }
    fprintf(archivo, "TOKEN\n");
    fprintf(archivo, "\n_________________________________________________________________________________________________________________________\n\n");
    while (temp != NULL)
    {
        fprintf(archivo, "\t\t%d\t\t\t%s", temp->numeroDeLinea, temp->texto);
        // para alinear la tabla
        for (i = 0; i < (longMaxima - temp->longitudTexto); i++)
        {
            fprintf(archivo, " ");
        }

        switch (temp->token)
        {
        case palabraReservada:
            fprintf(archivo, "   Palabra reservada\n");
            break;
        case identificador:
            fprintf(archivo, "   Identificador");
            break;
        case operadorOCaracterDePuntuacion:
            fprintf(archivo, "   Operador o caracter de puntuación\n");
            break;
        case literalCadena:
            fprintf(archivo, "   Literal cadena\n");
            break;
        case constanteOctal:
            fprintf(archivo, "   Constante octal\n");
        }

        fprintf(archivo, "\n_________________________________________________________________________________________________________________________\n\n");

        temp = temp->siguiente;
    }
}

void liberarMemoriaLista(NODO *lista)
{
    if (lista != NULL)
    {
        liberarMemoriaLista(lista->siguiente); // uso recursividad
        free(lista);
    }
}