#include <stdio.h>

#define fila 3
#define columna 5

void valorCalificacionesMenores(float matriz[fila][columna]);
void valorCalificacionesMayores(float matriz[fila][columna]);

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
            printf("Calif%d=\t", j+1);
            printf("%.3f\t", matriz[i][j]);
        }
        printf("\n");
    }

    valorCalificacionesMayores(matriz);
    valorCalificacionesMenores(matriz);

    return 0;
}

//Funcion para la evaluacion de la calificacion menor de los alumnos definidos
void valorCalificacionesMenores(float matriz[fila][columna]){
    float menor_calif;
    int i, j;

    menor_calif = matriz[0][0];

    for (i = 0; i < fila; i++){
        for (j = 0; j < columna; j++){

            if(matriz[i][j] < menor_calif){
                menor_calif = matriz[i][j];
            }
        }
    }

    printf("\nLa calificacion menor entre los alumnos es: %.3f", menor_calif);
}

void valorCalificacionesMayores(float matriz[fila][columna]){
    float mayor_calif;
    int i, j;

    mayor_calif = matriz[0][0];

    for (i = 0; i < fila; i++){
        for (j = 0; j < columna; j++){

            if(matriz[i][j] > mayor_calif){
                mayor_calif = matriz[i][j];
            }
        }
    }

    printf("\nLa calificacion mayor entre los alumnos es: %.3f", mayor_calif);
}