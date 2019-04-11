#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define cantAlumnos 3

void listar(char *nombres, char *apellido, int notas[], int edades[], int tamanio);
void getString(char mensaje[], char input[]);
int getStringLetras(char mensaje[], char input[]);
int getStrinNumeros(char mensaje[], char input[]);

int main()
{
    char nombre[cantAlumnos][50] = {"julian","roberto","esteban"};
    char apellido[cantAlumnos][50] = {"perez", "ortiz", "maidana"};
    int edad[cantAlumnos] = {23, 53, 18};
    int nota[cantAlumnos] = {2,7,10};
    int i;



    for(i = 0; i < cantAlumnos; i++)
    {
        getString("\nIngrese un nombre: ", nombre[i]);
    }

    for(i = 0; i < cantAlumnos; i++)
    {
        if(nombre[i] != -1)
        {
            printf("\n Nombre: %s \tApellido: %s \t Nota: %s \t Edad: %s\n", nombre[i], apellido[i],nota[i], edad[i]);
        }

    }
    return 0;
}

int getStringLetras(char mensaje[], char input[])
{
    int i;
    char aux[50];
    getString("", aux);

    esSoloLetra(aux);
}


void getString(char mensaje[], char input[])
{
    printf(mensaje);
    scanf("%s", input);
}


int esSoloLetra(char palabra[])
{
    int i = 0;
    while(palabra[i] != '\0')
    {
        if(palabra[i] != " ")
        {
            if(palabra[i] < 'a' || palabra[i] > 'z')
            {
                if(palabra[i] < 'A' || palabra[i] > 'Z')
                {
                    return 0;
                }
            }
        }


       i++;
    }
    return 1;
}
