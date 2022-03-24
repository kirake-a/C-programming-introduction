/* Escribir una cadena que tenga una funcion que reciba una cadena y que cuente cuantas vocales tiene la cadena
la cadena se capturara desde el programa principal. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define tam 30

void contadorCadena(char cadena[tam]);

int main(){
    char cadena[tam];

    printf("Defina algunas letras para el arreglo: ");
    gets(cadena);

    contadorCadena(cadena);

    return 0;
}

void contadorCadena(char cadena[tam]){
    int i, contador = 0;

    for (i = 0; i < tam; i++){
        cadena[i] = toupper(cadena[i]);

        if (cadena[i] == 65){
            contador += 1;
        }
        if (cadena[i] == 69){
            contador += 1;
        }
        if (cadena[i] == 73){
            contador += 1;
        }
        if (cadena[i] == 79){
            contador += 1;
        }
        if (cadena[i] == 85){
            contador += 1;
        }
 
    }

    printf("Contador de vocales = %d", contador);
}