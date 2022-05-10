/* Escribir un programa en C que inicialice un arreglo bidimensional con los números
del 1 al 6 y luego los muestre utilizando punteros. */
#include <stdio.h>
#define filas 2
#define columnas 6

int main(){
    //Declarando las variables y matrices a usar
    int matriz[filas][columnas];
    int *apuntadorM, valor = 0;

    // Ciclo FOR para inicializar al arreglo segun la instruccion dada
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){

            matriz[i][j] = valor + 1;

            valor++;

            if(valor >= columnas){
                valor = 0;
            }
        }
    }

    apuntadorM = matriz[0];

    // Printear el arreglo inicializado
    for (int i = 0; i < sizeof(matriz) / sizeof(int); i++){
        printf("Dato %d: %d\t\t", i + 1, *apuntadorM);

        if(i == columnas - 1){
            printf("\n");
        }

        apuntadorM++;
    }

    return 0;
}
