/* Capturar y mostrar los datos de una persona al estilo de un censo */
#include <stdio.h>

int main(){

    struct persona{
        int edad;
        char nombre[50];
        char direccion[100];
        int telefono;
    };

    struct persona alumno;

    printf("-------Censo-------\n");

    printf("Escriba la edad: ");
    scanf(" %d", &alumno.edad);

    // Limpiar la memoria del programa
    fflush(stdin);

    printf("\nSu nombre: ");
    gets(alumno.nombre);

    printf("\nSu direccion: ");
    gets(alumno.direccion);

    printf("\nSu telefono movil: ");
    scanf(" %d", &alumno.telefono);

    printf("\n\nDatos del alumno: %d, %s, %s, %d", alumno.edad, alumno.nombre, alumno.direccion, alumno.telefono);

    return 0;
}