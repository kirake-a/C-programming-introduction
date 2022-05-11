/* Desarrollar un programa con una función concatena dos cadenas de
caracteres. La función recibe dos punteros con las direcciones de
inicio de ambas cadenas y añade la segunda cadena al final de la
primera */
#include <stdio.h>
#include <string.h>

#define TAM 10

// Prototipado de funciones del programa
char leerCadena(char *cadena);
char concatenar(char *cadena1, char *cadena2, int TAM_auxiliar, int tam1);
void print_output(char *cadena_concat);

int main(){

    char cadena1[TAM], cadena2[TAM];
    int tam1, tam2, TAM_auxiliar;

    // Mandamos la cadenas declaradas a tener una defincion
    leerCadena(cadena1);
    leerCadena(cadena2);

    // Que tamano tienen las cadenas obtenidas
    tam1 = strlen(cadena1);
    tam2 = strlen(cadena1);

    TAM_auxiliar = tam1 + tam2;
    TAM_auxiliar += 3;

    // Funcion para concatenar ambas cadenas
    concatenar(cadena1, cadena2, TAM_auxiliar, tam1);

    return 0;
}

// Funcion solamente para leer las cadenas que se requieran
char leerCadena(char *cadena){
    printf("Digite una cadena: ");
    gets(cadena);
}

// Funcion especializada en concatenar las cadenas que recibe
char concatenar(char *cadena1, char *cadena2, int TAM_auxiliar, int tam1){
    char cadena_concat[TAM_auxiliar]; // Se declara una cadena para concatenar
    char *p_concat;
    int i;

// Se define la posicion del puntero a a[0]
    p_concat = cadena_concat;

    // Se agrega el contenido de cadena1 en cadena_concat
    for (i = 0; *cadena1 != '\0'; cadena1++){
        *p_concat = *cadena1;

        p_concat++;
    }

    // Se establece de manera segura la posicion del puntero para despues agregar cadena2
    p_concat = &cadena_concat[tam1];

    // Se agrega el contenido de la cadena2
    for (i = 0; *cadena2 != '\0'; cadena2++){
        *p_concat = *cadena2;

        p_concat++;
    }

    // Se manda la cadena que almacena los resultado a una funcion output
    print_output(cadena_concat);
}

// funcion que demuestra el resultado de cadena concat
void print_output(char *cadena_concat){

    printf("\n\nLa cadena concatenada es: %s", cadena_concat);
}