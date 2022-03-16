#include <stdio.h>

int main(){

    char materia[10];
    char opcion;

    printf("Su materia favorita es: ");
    scanf(" %s", &materia);

    opcion = materia[5];

    printf(materia);

    return 0;
}