#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

ePersona damePersona(ePersona unaPersona)
{
    ePersona* persona = NULL;


    printf("Ingrese nombre: ");
    gets(unaPersona.nombre);

    printf("Ingrese edad: ");
    scanf("%d", unaPersona.edad);

    return unaPersona;
}

void mostrarPersona(ePersona* unaPesona)
{
    printf("--- Persona ---\n\n %s \t %d", unaPesona.nombre, unaPesona.edad);
}

void mostrarPersonas(ePersona* listado, int tam)
{
    int i;
    for( i = 0; i < tam; i++)
    {
        mostrarPersona(listado[i]);
    }
}

