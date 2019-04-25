#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

typedef struct
{
        char codigoDeBarra[13];
        float precio;
        char nombre[50];
        char fechaDeVencimiento[50];
        char proveedor[50];
        int estado = 0;
}eProducto;


eProducto pedirProducto();

void mostrarProducto(eProducto);

void cargarArray(int,eProducto[]);

void mostrarArray(int,eProducto[]);

void construirArray(int,eProducto[]);

int inserteProducto(eProducto, eProducto[]);

int dameLugarLibre(eProducto[]);

int existeProducto(eProducto, eProducto[]);

int borrarProducto(eProducto, eProducto[]);

int editarProducto(eProducto, eProducto[]);


#endif // BIBLIOTECA_H_INCLUDED
