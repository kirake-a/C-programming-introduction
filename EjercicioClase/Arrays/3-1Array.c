/* Elaborar un programa que solicite 10 numeros enteros dessde el teclado.
Calcule la suma de los cuadrados de cada uno de ellos y obtenga la media. Use funciones*/
#include <stdio.h>
#include <math.h>

int leerArreglo(int array, int n);

int main(){
    int n = 10, array[n];
    float suma = 0;

    leerArreglo(array, n);

    return 0;
}

int leerArreglo(int array, int n){
    int i;

    for (i = 0; i < n; i++){
        printf("Inserte un numero para la posicion %d: ", i + 1);
        scanf(" %d", &array[i]);
    }

    return;
}

// SE TIENEN ERRORES NO RESUELTOS...