/* Escribir una función que reciba una cadena de a lo más 3 caracteres numéricos. La función convertirá la cadena
recibida al valor numérico correspondiente. La función debe validar la cadena recibida que represente un entero
positivo. */
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define TAM 3

int conocerCadena(char cad[TAM]);
int aNumero(char cad[TAM]);
int print_cadena(int cadena);

int main(){

    char cad[TAM];
    int tipo, x;

    printf("Ingrese una cadena con maximo 3 caracteres: ");
    gets(cad);

    tipo = conocerCadena(cad);

    // Si el contador en la funcion es igual a 3 entonces es un cadena con solamente numeros enteros
    if(tipo == 3){
        aNumero(cad);
    }
    else{
        printf(" -1. Esta cadena NO contiene 3 numeros enteros.");
    }

    return 0;
}

// Concemos si todos los valores que tiene la cadena son pertenecientes a un digito entre 0-9
int conocerCadena(char cad[TAM]){
    int i, contador = 0;


    for (i = 0; i < TAM; i++){

        // Cuando la posicion i tiene un digit, entonces se le suma 1 al contador
        if(isdigit(cad[i])){
            contador += 1;
        }
    }

    return contador;
}

// Aqui hay pasos inecesarios, porque la funcion atoi(), convierte un string a un valor numerico
int aNumero(char cad[TAM]){
    int i;
    int cadena;

    cadena = atoi(cad);

    print_cadena(cadena);
}

// Se imprime nuevamente al valor dado, pero no como string sino como un int
int print_cadena(int cadena){
    int i;

    printf("La cadena numerica: %d", cadena);
}