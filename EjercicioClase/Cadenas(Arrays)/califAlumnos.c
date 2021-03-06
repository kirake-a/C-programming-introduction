#include <stdio.h>
#define tam 20
/* Realizar un programa que pida las notas de 40 alumnos por pantalla y muestre un menú 
de opciones: 1. Listar notas, 2.Calcular la media, 3.Calcular el menor, 4.Calcular el 
mayor. */

void listarArray(float calif[tam]);
void mediaAritmetica(float calif[tam]);
void elMenor(float calif[tam]);
void elMayor(float calif[tam]);
void cantidadReprobados(float calif[tam]);

int main(){

    float calif[tam];
    int i, opcion;

    printf("Insete la calificacion de los alumnos: \n\n");

    for (i = 0; i < tam; i++){
        printf("La calificacion del alumno %d: ", i + 1);
        scanf("%f", &calif[i]);
    }

    do{
        // Desplazo del menu de opciones para hacer con el arreglo ya digitado con las calificaciones de los usuarios
        printf("\n\nMenu:");
        printf("\n1. Listar notas. \n2. Calcular la media. \n3. Calcular el menor \n4. Calcular el mayor.\n5. Cantidad de reprobados.\n");
        printf("0. Terminar el programa. \n\n");
        printf("Lo que desea hacer es con el array: ");
        scanf("%d", &opcion);

        if(opcion == 1){
            listarArray(calif);
        }
        if (opcion == 2)
        {
            mediaAritmetica(calif);
        }
        if (opcion == 3)
        {
            elMenor(calif);
        }
        if (opcion == 4)
        {
            elMayor(calif);
        }
        if (opcion == 5)
        {
            cantidadReprobados(calif);
        }

    } while (opcion != 0);

    return 0;
}

void listarArray(float calif[tam]){
    int i;

    for (i = 0; i < tam; i++){
        printf("* %.3f\n", calif[i]);
    }
}

void mediaAritmetica(float calif[tam]){
    float sumatoria = 0, promedio = 0;
    int i;

    for (i = 0; i < tam; i++){
        sumatoria = sumatoria + calif[i];
    }

    promedio = sumatoria / tam;

    printf("El promedio de calificaciones de los alumnos es: %.3f", promedio);
}

void elMenor(float calif[tam]){
    int i;
    float menor;

    menor = calif[0];

    for (i = 0; i < tam; i++){
        if (calif[i] < menor){
            menor = calif[i];
        }
    }

    printf("La calificacion menor es: %.3f", menor);
}

void elMayor(float calif[tam]){
    int i;
    float mayor;

    mayor = calif[0];

    for (i = 0; i < tam; i++)
    {
        if (calif[i] > mayor)
        {
            mayor = calif[i];
        }
    }

    printf("La calificacion mayor es: %.3f", mayor);
}

// Se agregaron funciones extra al programa...
void cantidadReprobados(float calif[tam]){
    int i, contador = 0;

    for (i = 0; i < tam; i++){
        if (calif[i] < 70){
            contador += 1;
        }
    }

    printf("En la lista estan reprobados %d alumnos.", contador);
}