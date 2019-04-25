#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 2

int main()
{

   /* eProducto unProducto;

    unProducto = pedirProducto(unProducto);
    mostrarProducto(unProducto);
*/
    eProducto productos[TAM] = {{"324dfg",30.24m,"Coca-Cola",}};

    cargarArray(TAM,productos);
    mostrarArray(TAM,productos);

    construirArray(productos);
    mostrarArray(productos);
    return 0;
}
