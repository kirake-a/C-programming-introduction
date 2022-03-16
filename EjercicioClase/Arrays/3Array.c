/* Elaborar un programa que solicite 10 numeros enteros dessde el teclado.
Calcule la suma de los cuadrados de cada uno de ellos y obtenga la media */
#include <stdio.h>
#include <math.h>

int main(){

    int i, n = 10;
    int array[n];
    float suma = 0;

    for (i = 0; i < 10; i++){
        printf("Inserte un numero para la posicion %d: ", i + 1);
        scanf(" %d", &array[i]);
    }

    for (i = 0; i < 10; i++){
        array[i] = pow(array[i], 2);
    }

    for (i = 0; i < 10; i++){
        suma = suma + array[i];
    }

    printf("\nEl promedio de los valores digitados es: %.3f", suma / 10);

    return 0;
}