#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

int menu();
void inicializar(EPersona per[]);
void altas(EPersona per[]);
void imprimir(EPersona per[]);
void bajas(EPersona per[]);
void grafico(EPersona per[]);


#endif // FUNCIONES_H_INCLUDED

