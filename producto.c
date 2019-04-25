#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include "string.h"

eProducto pedirProducto()
{

    eProducto retorno;

    printf("Ingrese Cod de Barras:");
    fflush(stdin);
    gets(retorno.codigoDeBarra);

    printf("Ingrese Nombre:");
    fflush(stdin);
    gets(retorno.nombre);

    printf("Ingrese Precio:");
    fflush(stdin);
    scanf("%f", &retorno.precio);

    printf("Ingrese fecha de venc:");
    fflush(stdin);
    gets(retorno.fechaDeVencimiento);

    printf("Ingrese proveedor:");
    fflush(stdin);
    gets(retorno.proveedor);


    return retorno;
}

void mostrarProducto(eProducto producto)
{
    printf("\n----------------------------------------");
    printf("\nCodigo:\t %s", producto.codigoDeBarra);
    printf("\nNombre:\t %s", producto.nombre);
    printf("\nPrecio:\t %f", producto.precio);
    printf("\nFecha de Venc:\t %s", producto.fechaDeVencimiento);
    printf("\nProveedor:\t %s", producto.proveedor);
    printf("\n----------------------------------------");
}


void cargarArray(int tam, eProducto listado[])
{
    int i;

    for(i = 0; i<tam; i++)
    {
        listado[i] = pedirProducto();
    }
}

void mostrarArray(int tam, eProducto listado[])
{
    int i;

    for(i = 0; i<tam; i++)
    {
        mostrarProducto(listado[i]);
    }
}

void construirArray(int tam ,eProducto[] listado)
{
    int i;

    for(i = 0; i< tam; i++)
    {
        listado[i] = 0;
    }

}

int inserteProducto(eProducto elProducto, eProducto listado[])
{
    int indice;

    indice = dameLugarLibre(listado);

    if(indice != -1)
    {
        listado[indice] = elProducto;
    }
    return indice;
}

int borrarProducto(eProducto elProducto, eProducto listado[])
{
    int indice;

    indice = existeProducto(elProducto,listado);

    if(indice != -1)
    {
        listado[indice].estado = -1;
    }
    return indice;
}
