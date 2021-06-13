#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define N 100

#define Q0 0
#define Q1 1

// struct Nodo
typedef struct nodo
{
    char info;
    struct nodo* sig;
} Nodo;

// struct Transición
typedef struct transicion
{
    int estadoActual;
    char caracterDeEntradaLeido;
    char cimaDePila;
    char simbolosAAgregarEnLaPila[3]:
    int siguienteEstado;
} TRANSICION;

// inicializar Pila
void iniciarPila(Nodo** p);

// PUSH en Pila
void push(Nodo** p, char c);

// POP en Pila
void pop(Nodo** p);

// Conocer cima de Pila
char cimaDePila(Nodo* p);

// Mostrar contenido de Pila
void mostrarPila(Nodo* p);

// Chequear Pila vacía (devuelve 1 si está vacía, 0 si contiene elementos)
int pilaVacia(Nodo* p);

// Evaluar transiciones de la Tabla
void evaluar(TRANSICION* transicion);

// Mostrar movimientos de la Tabla
void imprimirTransicion(TRANSICION transicion);