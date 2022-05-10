/* Definir una estrucutra con el nombre del alumno, sus 3 calificaciones de las unidades del curso,
su promedio en el curso, el mejor promedio de la unidad I, II y III */

#include <stdio.h>
#include <stdlib.h>

#define TAM_ALUM 3

struct curso{
    char nombre[50];
    float promedio1;
    float promedio2;
    float promedio3;
} alumno[TAM_ALUM];

int main(){
    // Variables
    int i;
    float sumatoria_general[TAM_ALUM];
    float promedio_individual[TAM_ALUM];
    float mejor_promedio1, mejor_promedio2, mejor_promedio3;
    int n, n2, n3;
    float suma1 = 0, suma2 = 0, suma3 = 0;

    mejor_promedio1 = alumno[0].promedio1;
    mejor_promedio2 = alumno[0].promedio2;
    mejor_promedio3 = alumno[0].promedio3;

    n = 0;
    n2 = 0;
    n3 = 0;

    // Obteniendo los valores para el arreglo de estructuras
    for (i = 0; i < TAM_ALUM; i++){
        fflush(stdin);

        printf("Ingrese el nombre del alumno %d: ", i + 1);
        gets(alumno[i].nombre);

        fflush(stdin);

        printf("Ingrese la el promedio de la unidad I del alumnos %d: ", i + 1);
        scanf("%f", &alumno[i].promedio1);

        printf("Ingrese la el promedio de la unidad II del alumnos %d: ", i + 1);
        scanf("%f", &alumno[i].promedio2);

        printf("Ingrese la el promedio de la unidad III del alumnos %d: ", i + 1);
        scanf("%f", &alumno[i].promedio3);
    }

    // Calculando sumatoria general de cada alumno
    for (i = 0; i < TAM_ALUM; i++){
        sumatoria_general[i] = (alumno[i].promedio1 + alumno[i].promedio2 + alumno[i].promedio3);
    }

    for (i = 0; i < TAM_ALUM; i++){
        promedio_individual[i] = sumatoria_general[i] / 3;
    }

    // Calculando al mejor promedio por unidad
    for (i = 0; i < TAM_ALUM; i++){

        if(alumno[i].promedio1 < alumno[i + 1].promedio1){
            mejor_promedio1 = alumno[i + 1].promedio1;

            n = i + 1;
        }
    }

    for (i = 0; i < TAM_ALUM; i++){

        if (alumno[i].promedio2 < alumno[i + 1].promedio2){
            mejor_promedio2 = alumno[i + 1].promedio2;

            n2 = i + 1;
        }
    }

    for (i = 0; i < TAM_ALUM; i++){

        if (alumno[i].promedio3 < alumno[i + 1].promedio3){
            mejor_promedio3 = alumno[i + 1].promedio3;

            n3 = i + 1;
        }
    }

    // FOR para printear la sumatoria y promedio de un alumno
    for (i = 0; i < TAM_ALUM; i++){
        printf("\n\n---------------------------------------------\n");
        printf("Alumno: %s\n", alumno[i].nombre);
        printf("Sumatoria general individual: %.3f\n", sumatoria_general[i]);
        printf("Promedio individual: %.3f\n", promedio_individual[i]);
    }

    // Output con los resultados obtenidos
    printf("\n\n-------------------------------------\n\nMejores promedio de la unidad\n");

    printf("\n1. Mejor promedio I: %.3f", mejor_promedio1);
    printf("\n\tAlumno: %s", alumno[n].nombre);
    printf("\n\n2. Mejor promedio II: %.3f", mejor_promedio2);
    printf("\n\tAlumno: %s", alumno[n2].nombre);
    printf("\n\n3. Mejor promedio III: %.3f", mejor_promedio3);
    printf("\n\tAlumno: %s", alumno[n3].nombre);

    return 0;
}
