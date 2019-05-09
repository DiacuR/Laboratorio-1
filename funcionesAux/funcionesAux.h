#ifndef FUNCIONESAUX_H_INCLUDED
#define FUNCIONESAUX_H_INCLUDED

typedef struct
{
    int id;
    int estado;
    char nombre[50];

}eEstructura;

int initeEstructura (eEstructura[], int);

eEstructura pedir_eEstructura();

int encontrarLugarLibre(eEstructura[], int);

int mostrarUno(eEstructura);

void cargarArray_eEstructura(eEstructura listado[], int tam);

int mostrarListado(eEstructura[],int);

int mostrarListadoConBorrados(eEstructura listado[],int tam);

int buscarPorId(eEstructura[] ,int, int);

void ordenar_eEstructura(char nombre [][50], char apellido[][50], int edad[], int tam);

int validarNumero(char*, int);

int validarNombre(char nombre[]);

void crearMenu();

int getNumero(char[], int);

void mostrarMenu();

int borrar_eEstructura(eEstructura lista[], int tam);

int insertar_eEstructura(eProducto listado[], int tam);

int editar_eEstructura(eEstructura lista[], int tam);
#endif // FUNCIONESAUX_H_INCLUDED
