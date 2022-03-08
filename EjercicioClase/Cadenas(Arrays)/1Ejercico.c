#include <stdio.h>
#include <string.h>

/* Programa que pide el nombre del usuario e imprime lo que el usuario digita */
int main(){
    char nombre[50];

    printf("Digite su nombre completo: ");
    gets(nombre);

    printf("Su nombre completo es: %s", nombre);
}