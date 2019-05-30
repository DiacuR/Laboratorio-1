#include <stdio.h>
#include <stdlib.h>
#include "alumno.h"
#include <string.h>
#define ARCHIVO ".\\alumnos.csv"
/*
w = escribe archivo.
a = si el arch existe va al ultimo renglon del archivo y escribe si no funciona como "w".
r = lee el archivo.
*/
int main()
{
    FILE *pArchivo;
    eAlumno *alumno;
    eAlumno unAlumno;

    alumno = &unAlumno;

    if((pArchivo = fopen(ARCHIVO,"w")) == NULL)
    {
        printf("\nEl archivo no puede ser abierto");
        exit(1);
    }
    else
    {
        printf("\nArchivo abierto");
    }

    //alumnoParametros(alumno,1234, "Juan", 7);
    strcpy(unAlumno.nombre,"juan");
    unAlumno.legajo = 555;
    unAlumno.nota = 10;
    fflush(stdin);

    //fwrite(&alumno,sizeof(eAlumno),1,pArchivo);       //devuelbe vacio. Es binario.


    char texto[] = "lalala;555;10";

    int largo = strlen(texto);

    fwrite(texto,sizeof(char),largo,pArchivo);

    fclose(pArchivo);

    if((pArchivo = fopen(ARCHIVO,"r")) == NULL)
    {
        printf("\nEl archivo no puede ser abierto");
        exit(1);
    }
    else
    {
        char renglon[70];
        while(!feof(pArchivo))      //verifica que el archivo no se termino.
        {
            int cant = fread(renglon,sizeof(char),70,pArchivo);
            char nombre[50];
            int legajo;
            int nota,r;

            printf("\nCantidad: %d \nTexto: %s\n",cant,texto);

            r = fscanf(pArchivo,"%s;%d;%d",&nombre,&legajo,&nota);
            //fprintf(pArchivo,"%s;%d;%d",nombre,legajo,nota);
            //printf("nombre:%s \nlegajo: %d \nnota: %d", nombre,legajo,nota);
             printf("%d", r);
        }fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", codigo, descripcion, categoria, precio);

    fclose(pArchivo);
    }


    return 0;
}
