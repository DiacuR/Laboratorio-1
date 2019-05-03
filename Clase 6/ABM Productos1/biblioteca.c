#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "biblioteca.h"


eProducto pedirProducto()
{
    eProducto productoParaRetornar;

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(productoParaRetornar.nombre);

    //  printf("Ingrese proveedor: ");
    //fflush(stdin);
    //gets(productoParaRetornar.proveedor);

    printf("Ingrese codigo de barra: ");
    fflush(stdin);
    gets(productoParaRetornar.codigoDeBarra);

    printf("Ingrese fecha de vencimiento: ");
    fflush(stdin);
    gets(productoParaRetornar.fechaDeVencimiento);

    printf("Ingrese precio: ");
    scanf("%f", &productoParaRetornar.precio);

    productoParaRetornar.estado = OCUPADO;

    return productoParaRetornar;
}


void mostrarProducto(eProducto unProducto)
{
    printf("%15s %15s %10s %10s %10f %5d\n", unProducto.nombre, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
}


void cargarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= pedirProducto();
    }
}


void mostrarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarProducto(listado[i]);
        }


    }
}


void construirArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].estado= LIBRE;
        listado[i].precio= 0;
        strcpy(listado[i].nombre, "");
//        strcpy(listado[i].proveedor, "");
        strcpy(listado[i].codigoDeBarra, "");
        strcpy(listado[i].fechaDeVencimiento, "");
    }
}


int insertarProducto(eProducto listado[], int tam)
{
    int indice;
    indice= dameLugarLibre(listado, tam);
    if(indice != -1)
    {
        listado[indice]= pedirProducto();
    }
    return indice;
}


int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}


int existeProducto(eProducto unProducto,eProducto lista[])
{

}


int borrarProducto(eProducto lista[], int tam)
{


    int i;
    char codigo[50];
    int loEncontro = 0;

    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].codigoDeBarra, codigo)==0)
        {
            lista[i].estado = LIBRE;
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



int editarProducto(eProducto lista[], int tam)
{
    int i;
    char codigo[50];
    int loEncontro = 0;

    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].codigoDeBarra, codigo)==0)
        {
            printf("Ingrese el nuevo precio: ");
            scanf("%f", &lista[i].precio);
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

void inicializarProveedor(eProveedor listaProveedores[],int tam)
{

    int id[3]= {1, 2, 3};
    char descripcion[3][50]= {"petrolera","petrolera","petrolera"};
    char localidad[3][50]= {"Avellaneda","Bahia Blanca","Rio Negro"};

    char cuit[3][13]= {"444","555","666"};

    char duenio[3][50]= {"YPF","Axtion","Shell"};

    int i;

    for(i=0; i<tam; i++)
    {
        strcpy(listaProveedores[i].id,id[i]);
        strcpy(listaProveedores[i].descripcion,descripcion[i]);
        strcpy(listaProveedores[i].localidad, localidad[i]);
        strcpy(listaProveedores[i].cuit, cuit[i]);
        strcpy(listaProveedores[i].duenio, duenio[i]);
    }



}

void inicializarProductos(eProducto listaProductos[],int tam)
{

    float precio[10]= {42,42,44,41,42,35,36,37,38};

    char nombre[10][50]= {"infinia","axion power","vpower","infinia disel","axion disel","vpower disel",
                          "super","axion super","normal","kerosene"
                         };

    int idProveedor[10] = {1,2,3,1,2,3,1,2,3,1};
    char codigoDeBarra[10][13]= {"122","222","322","422","522","622","722","822","922","962"};

    char fechaDeVencimiento[10][50]= {"01/01/2020","01/02/20","01/03/2020","01/04/2020","01/05/2020","01/06/2020","01/07/2020","01/08/2020","01/09/2020","01/10/2020"};

    int i;

    for(i=0; i<tam; i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
//        strcpy(listaProductos[i].proveedor, proveedor[i]);
        strcpy(listaProductos[i].fechaDeVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].estado = OCUPADO;
    }



}

void hardCodearProductos(eProducto listaProductos[],eProveedor listaProveedores[], int tam )
{

}

void mostrarArrayProductosConProveedores(eProveedor listaProveedor[],int tamProv, eProducto listaProductos[], int tamProd)
{
    int i, j;

    for(i = 0; i < tamProd; i++)
    {
        mostrarProducto(listaProductos[i]);

        for(j = 0; j < tamProv; j++)
        {

            if(listaProductos[i].idProveedor == listaProveedor[j].id )
            {
                mostrarProveedor(listaProveedor[j]);
            }


        }
    }

}

void mostrarArrayProveedoresConProductos(eProveedor listaProveedor[],int tamProv, eProducto listaProductos[], int tamProd)
{
    int i, j;

    for(i = 0; i < tamProv; i++)
    {
        mostrarProveedor(listaProveedor[i]);

        for(j = 0; j < tamProd; j++)
        {

            if(listaProductos[i].idProveedor == listaProveedor[j].id )
            {
                mostrarProducto(listaProductos[j]);
            }


        }
    }

}


void mostrarProveedor(eProveedor unProveedor)
{
    printf("%15d %15s %10s %10s %10s \n", unProveedor.cuit, unProveedor.descripcion, unProveedor.duenio, unProveedor.id, unProveedor.localidad);
}

void mostrarProveedores (eProveedor listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {

        mostrarProveedor(listado[i]);



    }
}
