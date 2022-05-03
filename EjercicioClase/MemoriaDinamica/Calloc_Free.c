/* Hacer un vector con 100 enteros que esten comprendidos entre 0 y 2 y 
contar con un vector dinamico cuantas veces aparece cada numero*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int *vector, int n);

/* Calloc tambien asigna espacio de memoria, tal como malloc, la diferencia fundamental
entre calloc y malloc es que malloc asigna espacio de memoria, pero este no esta inicializado, con
calloc este espacio de memoria se inicializa con 0's calloc es mas lenta de
usar que malloc*/

int main(){

    int i, op;
    int n = 3;
    int vector[100]; // El vector puede ser estatico y es lo mas optimo en este caso
    int *contador; // Vector dinamico

    contador = (int *)calloc(n, sizeof(int)); // Asginando espacio de memoria al contador;
    // Recordar que el nuevo vector aun no se inicializa

    if(contador == NULL){
        printf("\n--No se pudo asignar la memoria requerida--\n");
    }
    else{
        aleatorio(vector, 100); // mandamos una n como 100, para indicar ya el tamano

        for (i = 0; i < 100; i++){
            op = vector[i];

            *(contador + op) += 1; // 
        }

        for (i = 0; i < n; i++){
            printf("%i, ", *(contador + i));
        }
    }

    free(contador); // Libera la memoria dinamica que se ha usado hasta el momento
    /* Hacer uso de free() cuando se trabaja con memoria dinamica 
    es una buena practica de programacion, fundamental el uso de free al final
    del codigo, liberemos espacio */



    return 0;
}

void aleatorio(int *vector, int n){
    int i;
    srand(time(NULL));

    for (i = 0; i < n; i++){
        *(vector + i) = rand() % 3;
    }

    printf("\n");
}