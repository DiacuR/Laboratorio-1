#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarVector(int datos[], int tamanio);
void cargarVector(int datos[], int tamanio);
void ordenarVector(int datos[], int tamanio);
void mostrarPalabra(char palabra[])

int main()
{
    char usuario[][10] = {"Jose", "Maria","Jesus"};
    int nota[10] = {8,5,2};
    int i;
    int j;


    mostrarVector(nota, 3);
    cargarVector()
    mostrarPalabra(usuario,3)
    int resultado;

    for(i= 0; i<3; i++)
    {
        printf("\nAlumno: %s nota: %d \n", usuario[i], nota[i]);

    }

    for(i= 0; i<3; i++)
    {
        for(j= 0; j<2; j++)
        {

            //printf("%d -> %d \n", nota[i], nota[j]);
            /*
            resultado = strcmp("hola", "hola");
            printf("\n iguales: %d", resultado);

            resultado = strcmp("Hola", "hola");
            printf("\n primera: %d", resultado);

            resultado = strcmp("hola", "Hola");
            printf("\n segunda: %d", resultado);

            resultado = strcmp("A", "a");
            printf("\n A y a: %d", resultado);                      //Deberia dar

            resultado = strcmp("a", "b");
            printf("\n A y B %d", resultado);

            resultado = strcmp("b", "a");
            printf("\n b y a %d", resultado);
            */
            //resultado = strcmp(usuario[i],usuario[j]);
/*
            if(strcmp(usuario[i],usuario[j]) == 0)
            {
                int  aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;

                char aux2[10];
                strcpy(aux2,usuario[i]);
                strcpy(usuario[i],usuario[j]);              //para copiar se usa el strigcpy
                strcpy(usuario[j],aux2);

            }
        }
    }
*/
    //Ordenamiento por nota
    /*
    for(i= 0; i<3; i++)
    {
        printf("Alumno: %s nota: %d \n", usuario[i], nota[i]);
    }

    for(i= 0; i<3; i++)                                                     //Funcion ordenar
    {
        for(j= 0; j<2; j++)
        {
            printf("%d -> %d \n", nota[i], nota[j]);

            if(nota[i] > nota[j])
            {
                int  aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;

                strcpy(aux2,usuario[i]);
                strcpy(usuario[i],usuario[j]);
                strcpy(usuario[j],aux2);

            }
        }
    }

    for(i= 0; i<3; i++)
    {
        printf("\nAlumno: %s nota: %d \n", usuario[i], nota[i]);

    }
*/

    // Inicialzacion de array sen paralelo.

    //for(i = 0;i<2;i++){

    //usuario[i][0] = " ";              //Esto no se us
    //  strcpy(usuario[i], "");             //esto si. Sirbe para inicializar un array de char de cero
    //nota[i] = 0;                      //Esto sirbe para array numerico.de cero
    //}

    //Carga secuencial de arrays en paralelo

    for(i= 0; i<=2; i++)
    {
        printf("Ingrese usuario: %d ",i +  1 );
        //scanf("%s", usuario[i]);
        gets(usuario[i]);                                                 //Con esta funcion se puede poner espacios

        printf("Ingrese nota: %d ",i +  1 );
        scanf("%d", &nota[i]);
    }

    //strcpy(usuario[0], "hola");


    /*
        printf("Ingrese usuario: ");
        scanf("%s", usuario[0]);
        printf("Ingrese usuario: ");
        scanf("%s", usuario[1]);

        int tamanio = strlen(usuario[7]);            //strlen(lugar en array);   Recorre hasta que encuentra un \0 contando los espacios que recorri antes de eso.
        printf("tamanio: %d \n", tamanio);

        for(;i<10;i++){
            printf("Hello %s \n", usuario[i]);
        }
    */
    return 0;
}



void mostrarVector(int datos[10], int tamanio)
{
    int i = 0;
        for(; i<tamanio;i++){
        printf("nota : %d \n", datos[i]);
    }

}

void cargarVector(int datos[10], int tamanio)
{
    int i = 0;
        for(; i<tamanio;i++){
            datos[i] = -1;
    }
}

void ordenarVector(int datos[10], int tamanio)
{
    int i = 0;

    for
}

void mostrarPalabra(char datos[][10], int tamanio)
{
    int i = 0;
        for(; i<tamanio;i++){
            printf("nombre %s \n" , datos[i]);
    }
}
