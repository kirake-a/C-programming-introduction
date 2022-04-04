/* Esta es una segunda variante de la resolucion del ejercicio 3
como parte del ADA3 */
#include <stdio.h>
#include <string.h> //gets, strlen
#include <ctype.h>  //toupper

// Declarando funciones
void mayus(char cadena[100], int tamano);

// funcion principal
int main(){

    char cadena[100];
    int tamano;

    printf("Escriba lo que quiera: ");
    gets(cadena);

    tamano = strlen(cadena);
    mayus(cadena, tamano);

    return 0;
}

// funcion que hace el cambio a mayusculas
void mayus(char cadena[100], int tamano){

    for (int i = 0; i < tamano; i++){
        cadena[i] = toupper(cadena[i]);
    }

    for (int i = -4; i < tamano; i++){
        printf("_");
    }

    printf("\n| %s |\n", cadena);

    for (int i = -4; i < tamano; i++){
        printf("_");
    }
}