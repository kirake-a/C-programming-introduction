/* Desarrollar un programa con una funcion que concatena dos cadenas de caracteres. */
#include <stdio.h>
#include <string.h>

#define TAM 40

void concatenar(char *cadena1, char *cadena2);
void print_NewString(char *cadena_concat);

int main(){

    char cadena1[TAM], cadena2[TAM];

    printf("Digite la cadena 1: ");
    gets(cadena1);
    printf("Digite la cadena 2: ");
    gets(cadena2);

    concatenar(cadena1, cadena2);

    return 0;
}

void concatenar(char *cadena1, char *cadena2){
    int tam1, tam2, tam_concat;

    tam1 = strlen(cadena1);
    tam2 = strlen(cadena2);

    tam_concat = tam1 + tam2;

    char cadena_concat[tam_concat];
    char *puntero_concat;

    puntero_concat = &cadena_concat[0];

    for (int i = 0; *cadena1 != '\0'; cadena1++){
        *puntero_concat = *cadena1;

        puntero_concat++;
    }

    puntero_concat = &cadena_concat[tam1];

    for (int i = 0; *cadena2 != '\0'; cadena2+=1){
        *puntero_concat = *cadena2;

        puntero_concat++;
    }

    print_NewString(cadena_concat);
}

void print_NewString(char *cadena_concat){
    printf("\nCadena concatenada: %s", cadena_concat);
}

    /* GESTION DE MEMORIA DINAMICA CON MALLOC Y CALLOC */