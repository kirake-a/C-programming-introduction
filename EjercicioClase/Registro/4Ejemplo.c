// Creando arreglos de estructuras o arreglos de registros

#include <stdio.h>
#include <stdlib.h>

#define tam 3

// Creando la estructura
struct datos
{
    // Creando los campos
    char nombre[30];
    int edad;
    float promedio;
} alumno[tam];

int main()
{
    int i;

    for (i = 0; i < tam; i++){
        printf("Ingresa el nombre del alumno #%d: ", i+1);
        gets(alumno[i].nombre);

        fflush(stdin);

        printf("Ingresa la edad del alumno #%d: ", i+1);
        scanf("%d", &alumno[i].edad);

        printf("Ingresa el promedio del alumno #%d: ", i+1);
        scanf("%f", &alumno[i].promedio);

        fflush(stdin);
    }

    // Mostrando los datos de los alumnos
    printf("\nMostrando los datos de los alumnos\n");

    for (i = 0; i < tam; i++){
        
        printf("------------------------------------\n");
        printf("Alumno #%d\n\n", i+1);
        printf("Nombre: %s\n", alumno[i].nombre);
        printf("Edad: %d\n", alumno[i].edad);
        printf("Promedio: %.3f\n", alumno[i].promedio);
    }
   
    return 0;
}