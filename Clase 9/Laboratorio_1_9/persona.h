#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

typedef struct
{
    char nombre[50];
    int edad;

}ePersona;

ePersona damePersona(ePersona);
void mostrarPersona(ePersona*);
void mostrarPersonas(ePersona*,int)
#endif // PERSONA_H_INCLUDED
