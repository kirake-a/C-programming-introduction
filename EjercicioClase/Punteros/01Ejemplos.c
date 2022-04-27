#include <stdio.h>
#include <string.h>

/* Un apuntador es una variable que contiene la direccion de una variable.
Los apuntadores se utilizan en C, ya qeue ene ocasiones son la unica forma de 
guardar y enviar la informacion. */

/* Desarrollar un programa con una funcion que regrese la longitud de una cadena. */

int myStrlen(char *cadena){
    int tam;

    for (tam = 0; *cadena != '\0'; cadena++){
        tam++;
    }

    return tam;
}

int main(){
    char cadena[100];
    int longitud;

    printf("Escriba una cadena: ");
    gets(cadena);

    longitud = myStrlen(cadena);

    printf("La longitud de la cadena digitada es: %d", longitud);

    return 0;
}