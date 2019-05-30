#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

typedef struct
{
    int legajo;
    char nombre[51];
    int nota;

}eAlumno;

int alumnoParametros(eAlumno*,int,char*,int);
//int parseoFscanf(FILE,char[],)

#endif // ALUMNO_H_INCLUDED
