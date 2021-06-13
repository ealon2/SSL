#include "funciones.h"

// Tabla de movimientos

TRANSICION m[3][2]={
    // columna 0            columna 1
    {{q0,'a','$',"R$",q0},{__,'_','_',"__",__}}, // fila 1
    {{q0,'a','R',"RR",q0},{q0,'b','R',"EP",q1}}, // fila 2
    {{__,'_','_',"__",__},{q1,'b','R',"EP",q1}}, // fila 3
};

void evaluar(TRANSICION* transicion)
{
    int columna, fila;

    // Columna 0
    if((*transicion).caracterDeEntradaLeido == 'a')
    {
        columna = 0;

        if((*transicion).estadoActual == q0 && (*transicion).cimaDePila == '$')
            fila = 0;

        else if((*transicion).estadoActual == q0 && (*transicion).cimaDePila == 'R')
            fila = 1;
    }

    // Columna 1
    if((*transicion).caracterDeEntradaLeido == 'b')
    {
        columna = 1;

        if((*transicion).estadoActual == q0 && (*transicion).cimaDePila == 'R')
            fila = 1;

        else if((*transicion).estadoActual == q1 && (*transicion).cimaDePila == 'R')
            fila = 2;
    }

    strcpy((*transicion).simbolosAAgregarEnLaPila,m[fila][columna].simbolosAAgregarEnLaPila);
    (*transicion).siguienteEstado=m[fila][columna].siguienteEstado;

}

void iniciarPila(Nodo** p)
{
    (*p) = (Nodo*) malloc(sizeof(Nodo));
    (*p)->info = '$';
    (*p)->sig = NULL;
}

void push(Nodo** p, char c)
{
    Nodo* nuevo = (Nodo*) malloc(sizeof(Nodo));

    nuevo->info = c;
    nuevo->sig = (*p);
    (*p) = nuevo;
}

void pop(Nodo** p)
{
    if((*p) != NULL) // Pila vacía
    {
        Nodo* aux = *p;

        (*p) = (*p)->sig;
        free(aux);
    }
}

char cimaDePila(Nodo* p)
{
    if(p != NULL)
    {
        return p->info;
    }
}

void mostrarPila(Nodo* p)
{
    int i;
    Nodo* aux = p;

    for(i=0; aux != NULL; i++)
    {
        printf("\t\t\t\t\t|%c|\n", aux->info);
        aux = aux->sig;
    }
}

int pilaVacia(Nodo* p)
{
    return p == NULL ? 1 : 0;
}

void imprimirTransicion(TRANSICION transicion)
{
    // Uso la función de transición DELTA
    // Escribo la siguiente función para imprimir por pantalla los simbolos δ y ε
    SetConsoleOutputCP(65001);

    if(transicion.estadoActual == q0)
        printf("δ( q0 ,");

    else if(transicion.estadoActual == q1)
        printf("δ( q1 ,");

    printf(" %c ,", transicion.caracterDeEntradaLeido);
    printf(" %c )->", transicion.cimaDePila);

    if(transicion.siguienteEstado == q0)
        printf("(q0 ,");

    else if(transicion.siguienteEstado == q1)
        printf("(q1 ,");
    
    if(strcmp(transicion.simbolosAAgregarEnLaPila,"EP") == 0)
        printf(" ε)");
    
    else
        printf(" %s )", transicion.simbolosAAgregarEnLaPila);
}

int respondioSI(char* respuesta) // Devuelve 1 si la respuesta es SI, 0 si fue NO
{
    return (respuesta[0]=='S' && respuesta[1]=='I')? 1:0;
}