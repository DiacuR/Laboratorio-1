#include <stdio.h>
#include <stdlib.h>

void saludar(void);
int dameNumero(void);
float sacarPromedio(int suma,int contador);
void tomarDato(int numero);

int main()
{
/*
    int edad;
    float altura;
    altura= 82.5;
    edad = 66;


    printf("\ningrese su edad: ");
    scanf("%d",&edad);
    printf("\ningrese su altura: ");
    scanf("%f",&altura);

    printf("su edad es: %d", edad);         //%d es para agregar variables enteras.
    printf("\nsu altura es: %f", altura);   //%f "  "       "       "       flotantes.
*/
    saludar();
    int limite;
    int contador = 0;
    int numero ;
    int suma = 0;
    float promedio;

    limite = dameNumero();

    for( ;contador < limite; contador++ ){
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        suma += numero;

    }

    promedio = sacarPromedio(suma,contador);;
    printf("el promedio es: %f",promedio);


    return 0;
}

void saludar (void){
    printf("hola mundo \n");
}

int dameNumero(void){
    int cantidad;
    printf("ingrese un nros: ");         //%d es para agregar variables enteras.
    scanf("\n%d", &cantidad);   //%f "  "       "       "       flotantes.

    return cantidad;
}

float sacarPromedio(int suma,int contador){
    float promedio;
    promedio = (float) suma / contador;
    return promedio;
}
