#include "funciones.h"
#include <conio.h>

int main()
{
    char respuesta[]="SI";
    int i=0, j=0, c;
    char* cadenaSinEspacios = (char*) malloc(N);
    Nodo* p = NULL;
    TRANSICION transicion;

    while(respondioSI(respuesta))
    {
        cadenaSinEspacios = (char*) malloc(N);
    

    // Inicializo la Pila con $
    iniciarPila(&p);

    // Solicitar al usuario el ingreso de una cadena
    printf("\n Ingrese una cadena que...");

        // No guardar espacios en blanco
        for(i=0; (c=getc(stdin)) != '\n';)
        {
            if(c!=32) //32 es ESPACIO
            {
                cadenaSinEspacios[i]=c;
                i++;
            }
        }

        cadenaSinEspacios[i]='\0';

        printf("\n CADENA LEIDA SIN ESPACIOS: ");
        printf("%s", cadenaSinEspacios);

        // Inicializo transición
        transicion.estadoActual = q0;
        transicion.caracterDeEntradaLeido = cadenaSinEspacios[0];
        transicion.cimaDePila = cimaDePila(p);
        strcpy(transicion.simbolosAAgregarEnLaPila,"__");
        transicion.siguienteEstado=__;

        // Evalúo caracter a caracter
        for(j=0;j<strlen(cadenaSinEspacios);)
        {
            evaluar(&transicion);
            printf("\nTRANSICION\n");
            imprimirTransicion(transicion);

            pop(&p); // Hago POP del elemento en la cima de la Pila

            if(strcmp(transicion.simbolosAAgregarEnLaPila,"EP") != 0) //Agrego solamente "R$" o "RR"
            {
                push(&p,transicion.simbolosAAgregarEnLaPila[1]); // Primero hago PUSH del segundo elemento
                push(&p,transicion.simbolosAAgregarEnLaPila[0]); // Luego hago PUSH del primer elemento
            }

            // Imprimo la Pila
            printf("\t PILA:\n");
            mostrarPila(p);

            j++; // Leo el siguiente caracter

            transicion.estadoActual=transicion.siguienteEstado; // Cambio de estado
            transicion.cimaDePila=cimaDePila(p); // Guardo en transicion.cimaDePila la cima de la Pila
            transicion.caracterDeEntradaLeido=cadenaSinEspacios[j]; // Leo el nuevo caracter
        }

        // Quito el simbolo $
        pop(&p);

        // Si la pila queda vacía la cadena es ACEPTADA
        if(pilaVacia(p))
            printf("\nLA PILA QUEDÓ VACIA.\nPOR LO TANTO LA CADENA \"%s\" ES ACEPTADA.",cadenaSinEspacios);
                    
        else
        {
            printf("\nERROR.\nLA CADENA ES RECHAZADA.");
            getch();
        }

        printf("\n Quiere ingresar otra cadena? (responda SI o NO): ");
        scanf("%s",&respuesta);

        if(respondioSI(respuesta))
        {
            p = NULL;
            fflush(stdin); // Borra el buffer de entrada
        }

        free(cadenaSinEspacios);
    }

    return 0;    
}