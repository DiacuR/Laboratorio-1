#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "biblioteca.h"

//Funcion Ordenar por Precio puede recibir un parametro mas para ordenar decreciente o creciente


int main()
{
    //definir array.
    //cargar array.
    //mostrar array.

    int opcion;

    eProducto unProducto;
    eProducto listadoProductos[T];

    eProveedor listaDeProveedores[3];
    eProveedor unProveedor;
    mostrarArrayProductosConProveedores (listadoProductos,  10 ,  listaDeProveedores, 3);


    //eProducto listadoDeProductos[3];


    construirArray(listadoProductos,T);
    inicializarProductos(listadoProductos,T);
    mostrarArray(listadoProductos,T);

    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\nElija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
               insertarProducto(listadoProductos, T);
            break;
            case 2:
                borrarProducto(listadoProductos,T);
                break;
            case 3:
                editarProducto(listadoProductos, T);
                break;

            case 4:
            /*    int opcionMostrar;
                printf("Que desea mostrar:\n 1.Productos \n 2. Proveedores");
                gets(opcion2);
                switch(opcion2)
                {
                case 1:*/
                    mostrarArray(listadoProductos,T);
                    /*break;

                case 2:

                }


                break;
                */
        }
    }while(opcion!=10);







    return 0;
}
