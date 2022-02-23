#include <stdio.h>
#include <string.h>

int main(){

    char nombre[10];

    printf("escriba su nombre: ");
    scanf("%s", nombre);

    printf("Hola, %s", nombre);

    return 0;
}