#include <stdio.h>

int main(){

    struct libro{
        char titulo[50];
        char nombre[40];
        char editorial[50];
        int edicion;
        int ISBN;
    };

    struct libro mate;

    struct libro
    {
        char titulo[50];
        char nombre[40];
        char editorial[50];
        int edicion;
        int ISBN;
    } libro1, libro3, libro3;

    struct libro
    {
        char titulo[50];
        char nombre[40];
        char editorial[50];
        int edicion;
        int ISBN;
    } libro = {"My book", "Autor", "Princeless", 2, 90415810-12};

    // No da la cantidad de tipos de variable que tiene almacenada la estructura previamente definida con struct
    sizeof(libro);

    // Acceso a los elementos de la estructura:
    // Mediante el operador punto y mediante el operador apuntador...

    return 0;
}