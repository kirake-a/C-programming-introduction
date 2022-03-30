#include <stdio.h>

#define fila 3
#define columna 5

void outputPrintMatriz(float matriz[fila][columna]);
void valorCalificacionesMenores(float matriz[fila][columna]);
void valorCalificacionesMayores(float matriz[fila][columna]);
void puntosExtra();
void promedioCalificaciones();

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

    //Printenado la matriz resultante con los valores en entrada de datos
    outputPrintMatriz(matriz);

    //Llamando funciones para encontrar al valor mayor y menor
    valorCalificacionesMayores(matriz);
    valorCalificacionesMenores(matriz);

    return 0;
}

// Funcion que imprime a la matriz definida por el usuario
void outputPrintMatriz(float matriz[fila][columna]){
    int i, j;

    for (i = 0; i < fila; i++){
        for (j = 0; j < columna; j++){
            printf("Calif%d=\t", j + 1);
            printf("%.3f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Funcion para la evaluacion de la calificacion menor de los alumnos definidos
void valorCalificacionesMenores(float matriz[fila][columna]){
    float menor_calif;
    int i, j, alumno = 0;

    menor_calif = matriz[0][0];

    // Creando comparaciones entre los valores de la matriz para conocer al valor menor
    for (i = 0; i < fila; i++){
        for (j = 0; j < columna; j++){

            if(matriz[i][j] < menor_calif){
                menor_calif = matriz[i][j];

                alumno = i + 1;
            }
        }
    }

    printf("\n\nLa calificacion menor entre los alumnos es: %.3f", menor_calif);
    // Falta conocer a que alumno le corresponde esa calif
    printf("\nLa calificacion menor corresponde al alumno: %d", alumno);
}

// Evaluando para conocer la calificacion mayor de los alumnos definidos
void valorCalificacionesMayores(float matriz[fila][columna]){
    float mayor_calif;
    int i, j, alumno = 0;

    mayor_calif = matriz[0][0];

    // Creando comparaciones entre los valores de la matriz para conocer al valor mayor...
    for (i = 0; i < fila; i++){
        for (j = 0; j < columna; j++){

            if(matriz[i][j] > mayor_calif){
                mayor_calif = matriz[i][j];

                alumno = i + 1;
            }
        }
    }

    printf("\nLa calificacion mayor entre los alumnos es: %.3f", mayor_calif);
    // Falta conocer a que alumno le corresponde esa calif
    printf("\nLa calificacion mayor corresponde al alumno: %d", alumno);
}

// Funcion para agregarle puntos extra a los alumnos... no se debera pasar de 100 puntos por calificacion dada...
void puntosExtra(){

}