#include <stdio.h>
#include <stdlib.h>
#include "funcionesAux.h"
#include "string.h"
#define BORRADO -1
#define OCUPADO 0
#define LIBRE 1

/** \brief Inicializa el array (lo vacia).
 *
 * \param
 * \param
 * \return
 *
 */
int initeEstructura (eEstructura listado[], int tam)
{
    int retorno = -1;
    int i;
    if(tam > 0 && listado != NULL)
    {
        retorno = 0;
        for(i = 0; i < tam; i++)
        {
            listado[i].id = 0;
            strcpy(listado[i].nombre,"");
            listado[i].estado = 0;
        }
    }
    return retorno;
}


/** \brief Encuentra lugar libre en el array para un nuevo elemento
 *
 * \param listado[] eEstructura
 * \param tam int
 * \return int
 *
 */
int encontrarLugarLibre(eEstructura listado[], int tam)
{
    int i;
    int retorno = -1;

    if(tam > 0 && listado != NULL)
    {
        retorno = -2;
        for(i = 0; i < tam; i++)
        {
            if(listado[i].estado == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}


/** \brief Encuentra un id para poder usar
 *
 * \param listado[] eEstructura
 * \param tam int
 * \return int
 *
 */
int siguienteId(eEstructura listado[],int tam)
{
    int retorno = 0;
    int i;
    if(tam > 0 && listado != NULL)
    {
        for(i=0; i < tam; i++)
        {
            if(listado[i].estado == OCUPADO)
            {
                if(listado[i].id > retorno)
                {
                    retorno = listado[i].id;
                }
            }
        }
    }

    return retorno+1;
}


int validarNumero(char* numero ,int tam)
{
    int i;
    int retorno = 0;
    //char Num[] = *numero;
    for(i = 0; i < tam; i++)
    {

        if(*numero < 48 || *numero > 57)
        {
            retorno = -1;
            break;
        }
    }

    return retorno;

}

int getNumero(char numero[], int tam)
{
    int i = -1;
    int retorno;
    char *getNum;

    getNum = &numero[tam];

    while(i == -1)
    {
        i = validarNumero(getNum, tam);
        if( i == -1)
        {
            printf("\nReingrese numero: ");
            scanf("%s", getNum);
        }

    }
        printf("Todo bien");

        char e[6];
        int j;
       /* for(j = 0; j < 6; j++)
        {

        }*/
        j =(int)*getNum;



        retorno = atoi(numero[6]);

    return retorno;
}


void crearMenu()
{
    int opcion;
    mostrarMenu();
    scanf("%d", &opcion);

    switch(opcion)
    {

    case 1:

        break;

    case 2:

        break;

    case 3:

        break;

    case 4:

        break;
    }
}

void mostrarMenu()
{
    printf("\n1. Alta\n2. Baja\n3. Modificar\n4. Borrar\n5. Mostrar\n");
}


int validarNombre(char nombre[])
{
    int i;
    int retorno = 1;
    for(i = 0; i < strlen(nombre); i++)
    {
        if(!(nombre[i] >= 65 && nombre[i] <= 90 || nombre[i] >= 97 && nombre[i] <= 122))
        {
            printf("Nombre invalido");
            retorno = 0;
        }
    }
    return retorno;
}

int mostrarUno(eEstructura parametro)
{
     printf("\n %s - %d - %d",parametro.nombre,parametro.id,parametro.estado);

}


int mostrarListado(eEstructura listado[],int tam)
{
    int retorno = -1;
    int i;
    if(tam > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<tam; i++)
        {
            if(listado[i].estado==OCUPADO)
            {

                mostrarUno(listado[i]);
            }
        }
    }
    return retorno;
}

int buscarPorId(eEstructura listado[] ,int tam, int id)
{
    int retorno = -1;
    int i;
    if(tam > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0; i < tam; i++)
        {
            if(listado[i].estado == OCUPADO && listado[i].id == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}


void ordenar_eEstructura(char nombre [][50], char apellido[][50], int edad[], int tam)
{
    int i, j;
    char auxCadena[50];
    int auxEntero;

    for(i = 0; i < tam -1; i++)
    {
        for(j = i + 1; j < tam; j++)
        {
            if(strcmp(nombre[i],nombre[j]) > 0)
            {
                strcpy(auxCadena, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], auxCadena);

                strcpy(auxCadena, apellido[i]);
                strcpy(apellido[i], apellido[j]);
                strcpy(apellido[j], auxCadena);

                auxEntero = edad[i];
                edad[i] = edad[j];
                edad[j] = auxEntero;

            }
        }
    }
}

void cargarArray_eEstructura(eEstructura listado[], int tam)
{
    int i;
    for(i=0; i < tam; i++)
    {
        listado[i]= pedir_eEstructura();
    }
}


eEstructura pedir_eEstructura()
{
    eEstructura eEstructuraParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(eEstructuraParaRetornar.nombre);

    printf("OTRA ESTRUCUTURA:\n");
    int i;
    for(i= 0; i < tam; i++)
    {
        printf("%4d %15s\n", listadoOTRAESTRUCTURA[i].id, OTRA[i].NOMBRE);

    }

    eEstructuraParaRetornar.estado = OCUPADO;


    return eEstructuraParaRetornar;
}

int mostrarListadoConBorrados(eEstructura listado[],int tam)
{
    int retorno = -1;
    int i;
    if(tam > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<tam; i++)
        {
            if(listado[i].estado==LIBRE)
            {
                printf("\n[LIBRE]");
            }
            mostrarUno(listado[i]);
        }
    }
    return retorno;
}



int insertar_eEstructura(eProducto listado[], int tam)
{
    int indice;
    indice = encontrarLugarLibre(listado, tam);
    if(indice != -1)
    {
        listado[indice]= pedir_eEstructura();
    }
    return indice;
}

int borrar_eEstructura(eEstructura lista[], int tam)
{


    int i;
    char codigo[50];
    int seEncontro = 0;

    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].id, codigo)==0)
        {
            lista[i].estado = LIBRE;
            seEncontro = 1;
            break;
        }

    }

    if(loEncontro==0)
    {
        printf("Codigo inexistente!!");
    }

    return 0;
}


int editar_eEstructura(eEstructura lista[], int tam)
{
    int i;
    char codigo[50];
    int loEncontro = 0;

    printf("Ingrese el id: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].id, codigo)==0)
        {
            printf("Ingrese el nuevo ¿nombre?: ");
            scanf("%s", &lista[i].nombre);
            loEncontro = 1;
            break;
        }

    }

    if(loEncontro==0)
    {
        printf("Codigo inexistente!!");
    }

    return 0;
}

void mostrarArray_eEstructura_ConOTRA_ESTRUCTURA(OTRA listaOTRA[],int tamOTRA, eEstructura lista_eEstructura[], int tam_eEstructura)
{
    int i, j;

    for(i = 0; i < tamOTRA; i++)
    {
        mostrarOTRA(listaOTRA[i]);

        for(j = 0; j < tam_eEstructura; j++)
        {

            if(listaOTRA[i].idOTRA == lista_eEstructura[j].id )
            {
                mostrarUno(lista_eEstructura[j]);
            }
        }

    }
}
