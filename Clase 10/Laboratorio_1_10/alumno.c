#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
int alumnoParametros(eAlumno* alumno, int legajo,char* nombre,int nota)
{
    if(nombre !=NULL)
    {
        alumno->legajo = legajo;
        strcpy(alumno->nombre,nombre);
        alumno->nota = nota;
    }
}
