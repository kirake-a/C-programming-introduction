/* Hacer una matriz de 4*4 y que sume los datos de la tercera
columna */
#include <stdio.h>
#define tam 4

int main(){
    float matriz[tam][tam], suma = 0;
    int i, j;

    //Pidiendo valores para la matriz al usuario
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("[%d][%d]: ", i+1, j+1);
            scanf(" %f", &matriz[i][j]);
        }
    }

    //Sumando todos los valores de la columna 3 de la matriz
    for (i = 0; i < tam; i++){
        suma = suma + matriz[i][2];
    }

    //Dando un output
    printf("La suma de los valores de la columna 3 de la matriz es: %.3f", suma);

}