// Aritmetica de apuntadores
#include <stdio.h>

int main()
{
    int arreglo[6] = {1, -10, 0, 1, 20, -7};
    int *apArray;

    apArray = arreglo;
    apArray++;

    printf("Contenido de la direccion de memoria apuntada por apArray: %d", *apArray);

    apArray += 4;

    printf("\nContenido de la direccion de memoria apuntada por apArray: %d", *apArray);

    return 0;
}