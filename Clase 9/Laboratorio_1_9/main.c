#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#define TAM 10

int main()
{
    int i;
    ePersona listadoDePersonas [TAM];
    ePersona* pPersona;

    //printf("%p\n", &pPersona);

    pPersona = malloc(sizeof(ePersona));

    pPersona = &listadoDePersonas[TAM];

    for( i = 0; i < 10; i++)
    {
        pPersona -> nombre;
        pPersona -> edad;
    }


    if(listadoDePersonas == NULL)
    {

    }

    //printf("%p", &pPersona);

    return 0;
}
