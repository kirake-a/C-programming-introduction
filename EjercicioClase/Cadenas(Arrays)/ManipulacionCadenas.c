/* Escribir una funcion que reciba una cadena a lo mas de 3 caracteres numericos. La funcion convertira
la cadena recibida al valor numerico correspondiente. La funcion debe validar la cadena recibida que represente
un entero positivo */

#include <stdio.h>
#define tam 4

void convertidor(char cadena[tam]);

int main(){

    char cadena[tam];

    printf("Escriba un numero, no mayor a 3 caracteres numericos: ");
    scanf("%s", &cadena);

    convertidor(cadena);

    return 0;
}

void convertidor(char cadena[tam]){
    int i, evaluador, contador = 0;
    char cadena_revisar[tam];

    for (i = 0; i < tam; i++){

        if(cadena[i] == 46){
            contador += 1;

            cadena_revisar[i] = cadena[i];
        }
        else{
            contador = contador;
        }
    }

    if( contador > 0){
        printf("Este es un numero flotante, por lo tanto no es entero.");
    }
}