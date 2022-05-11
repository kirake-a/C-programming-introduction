// Conocer la cantidad de vocales dada un string por el usuario usando punteros... Ruben Alvarado
#include <stdio.h>

#define TAM 50

// Prototipado de la funcion que cuenta la cantidad de vocales del string
int contadorVocales(char *cadena);

int main(){
    // Declaracion de variables
    int contador;
    char cadena[TAM];

    printf("Digite una cadena de caracteres: ");
    gets(cadena);

    // Se manda a funcion el string y retorna a la variable contador que se refiere a la cantidad de vocales del string mismo
    contador = contadorVocales(cadena);

    printf("La cantidad de vocales de la cadena es: %d", contador);
}

// Se recibe la cadena como un puntero desde main
int contadorVocales(char *cadena){
    int i, contador = 0;    // Contador es 0, porque hasta ahora no se ha contado la cantidad de vocales del string
    char *apuntador;

    // Se usa un puntero auxiliar que apunta a cadena[0]
    apuntador = cadena;

    /* Mediante ciclo FOR se verifica si la posicion en el apuntador auxiliar corresponde a una vocal
    si es una vocal se le aumenta 1 a la variable contador hasta que el string deje de tener caracteres */
    for (i = 0; *apuntador != '\0'; apuntador++){

        if(*apuntador == 'a'){
            contador += 1;
        }
        if (*apuntador == 'e'){
            contador += 1;
        }
        if (*apuntador == 'i'){
            contador += 1;
        }
        if (*apuntador == 'o'){
            contador += 1;
        }
        if (*apuntador == 'u'){
            contador += 1;
        }
    }

    // Se retorna la cantidad de vocales que existen en el string
    return contador;
}