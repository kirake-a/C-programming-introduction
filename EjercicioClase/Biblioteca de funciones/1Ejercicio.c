/* Programa que lea un caracter y que verifique si es numero o letra, si es letra
que lo convierta a mayuscula */

#include <stdio.h>
#include <ctype.h>

int main(){

    char caracter;

    printf("Digite un caracter: ");
    scanf("%c", &caracter);

    if( isdigit(caracter)){
        printf("El caracter %c es un numero. ", caracter);
    }

    if(isalpha(caracter)){
        caracter = toupper(caracter);

        printf("El caracter %c es una letra", caracter);
    }

    return 0;
}