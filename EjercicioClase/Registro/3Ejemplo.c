// Creando registros o estructuras simples
#include <stdio.h>
#include <stdlib.h>

//Creando la estructura
struct datos{
    //Creando los campos
    char nombre[30];
    int edad;
    float promedio;
}alumno1, alumno2;

int main(){

    // Alumno 1 - datos
    printf("Ingresa el nombre del alumno #1: ");
    gets(alumno1.nombre);

    fflush(stdin);

    printf("Ingresa la edad del alumno #1: ");
    scanf("%d", &alumno1.edad);

    printf("Ingresa el promedio del alumno #1: ");
    scanf("%f", &alumno1.promedio);

    fflush(stdin);

    // Alumno 2 - datos
    printf("Ingresa el nombre del alumno #2: ");
    gets(alumno2.nombre);

    fflush(stdin);

    printf("Ingresa la edad del alumno #2: ");
    scanf("%d", &alumno2.edad);

    printf("Ingresa el promedio del alumno #2: ");
    scanf("%f", &alumno2.promedio);

    //Mostrando los datos de los alumnos
    printf("Mostrando los datos de los alumnos\n");
    printf("------------------------------------\n");
    printf("Alumno #1\n\n");
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Edad: %d\n", alumno1.edad);
    printf("Promedio: %.3f\n", alumno1.promedio);

    printf("\n------------------------------------\n");
    printf("Alumno #2\n\n");
    printf("Nombre: %s\n", alumno2.nombre);
    printf("Edad: %d\n", alumno2.edad);
    printf("Promedio: %.3f\n", alumno2.promedio);

    return 0;
}