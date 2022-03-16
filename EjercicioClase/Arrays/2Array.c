/* Escribir un programa que capture las edades de los alumnos e imprima
el promedio de las edades */
#include <stdio.h>

int main(){
    int i, edades[10];
    float suma = 0;

    for (i = 0; i < 10; i++){
        printf("Digite la edad del alumnos en la posicion %d: ", i + 1);
        scanf(" %d", &edades[i]);

    }

    for (i = 0; i < 10; i++){
        printf("\nEdad[%d]: %d", i, edades[i]);
    }

    for (i = 0; i < 10; i++){
        suma = suma + edades[i];
    }

    printf("\nEl promedio de las edades es: %.3f", suma / 10);

    return 0;
}
