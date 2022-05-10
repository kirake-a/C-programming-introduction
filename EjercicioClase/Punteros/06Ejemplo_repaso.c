/* Desarrollar un programa con una función que compare dos cadenas de caracteres.
La función recibe dos punteros con las direcciones deinicio de ambas cadenas y 
si devuelve cero, entonces las dos cadenas son iguales */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 10

int comparadorCadenas(char *cadena1, char *cadena2);
char leerCadena(char *cadena);

int main(){

    char cadena1[TAM], cadena2[TAM];
    int tam1, tam2;
    int valor_verdad;

    // Se mandan las cadenas declaradas a que el usuario les de contenido
    leerCadena(cadena1);
    leerCadena(cadena2);

    // Descubriendo el tamano de las cadenas para comparar
    tam1 = strlen(cadena1);
    tam2 = strlen(cadena2);

    //verificando que las cadenas digitadas tengan la misma longitud
    if(tam1 == tam2){
        valor_verdad = comparadorCadenas(cadena1, cadena2);

        if(valor_verdad == tam1){
            printf("\nLas cadenas digitadas son iguales.");
        }
        else{
            printf("\nLas cadenas digitadas son diferentes.");
        }
    }
    else if(tam1 != tam2){
        printf("\nLas cadenas digitadas son diferentes.");
    }

    return 0;
}

// Funcion especializada en pedirle las cadenas al usuario
char leerCadena(char *cadena){
    printf("Digite una cadena: ");
    gets(cadena);
}

// Cadena que compara las cadenas dadas
int comparadorCadenas(char *cadena1, char *cadena2){
    int contador = 0;

    // Ciclo while(), con el que se determina que el contenido de las cadenas sea igual
    while(*cadena1 == *cadena2){
        contador += 1;

        cadena1++;
        cadena2++;
    }

    contador -= 1;

    // Se devuelve el valor del contador que es bandera de la igualdad de las cadenas
    return contador;
}