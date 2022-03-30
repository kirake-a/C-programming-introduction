#include <stdio.h>

#define fila 3
#define columna 5

int main(){

    float matriz[fila][columna];
    int i, j;

    // Inicializando la matriz
    for (i = 0; i < fila; i++){
        for (j = 0; j < columna; j++){
            printf("Inserte la calificacion %d del alumno %d: ", j+1, i+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\n\n");

    // Printeando la matriz obtenida de la digitacion del usuario
    for (i = 0; i < fila; i++){
        for (j = 0; j < columna; j++){
            printf("%.3f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}