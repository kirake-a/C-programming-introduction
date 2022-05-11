/* Desarrollar un programa con una función concatena dos cadenas de
caracteres. La función recibe dos punteros con las direcciones de
inicio de ambas cadenas y añade la segunda cadena al final de la
primera */
#include <stdio.h>
#include <string.h>

#define TAM 10

char leerCadena(char *cadena);
char concatenar(char *cadena1, char *cadena2, int TAM_auxiliar, int tam1);
void print_output(char *cadena_concat);

int main(){

    char cadena1[TAM], cadena2[TAM];
    int tam1, tam2, TAM_auxiliar;

    leerCadena(cadena1);
    leerCadena(cadena2);

    tam1 = strlen(cadena1);
    tam2 = strlen(cadena1);

    TAM_auxiliar = tam1 + tam2;
    TAM_auxiliar += 3;

    concatenar(cadena1, cadena2, TAM_auxiliar, tam1);

    return 0;
}

char leerCadena(char *cadena){
    printf("Digite una cadena: ");
    gets(cadena);
}

char concatenar(char *cadena1, char *cadena2, int TAM_auxiliar, int tam1){
    char cadena_concat[TAM_auxiliar];
    char *p_concat;
    int i;

    p_concat = cadena_concat;

    for (i = 0; *cadena1 != '\0'; cadena1++){
        *p_concat = *cadena1;

        p_concat++;
    }

    p_concat = &cadena_concat[tam1];

    for (i = 0; *cadena2 != '\0'; cadena2++){
        *p_concat = *cadena2;

        p_concat++;
    }

    print_output(cadena_concat);
}

void print_output(char *cadena_concat){

    printf("\n\nLa cadena concatenada es: %s", cadena_concat);
}