/* MALLOC y REALLOC */

/* realizar un vector dinamico de 10 elementos aleatorios comprendidos entre 0 y 2
y eliminar todos los numeros repetidos reajustando el vector */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int *vector, int n);

int main(){

    int i, j, k;
    int n = 10;
    int *vector;

    vector = (int*)malloc(n * sizeof(int)); // Malloc asigna un tamano al vector, reserva el espacio de memoria requerido

    if(vector == NULL){

        printf("\n\n---No se reservo la memoria requerida---");
    }
    else{ // Aqui es donde realmente inicia el programa

        aleatorio(vector, n); // Para inicializar el vector con numeros aleatorios...

        for (i = 0; i < n; i++){

            j = i + 1;

            while(j < n){

                if(*(vector + i) == *(vector + j)){

                    for (k = j; k + 1 < n; k++){

                        *(vector + k) = *(vector + k + 1);
                    }

                    n--;
                }
                else{
                    j++;
                }

            }
        }

        /* Realloc para redimensionar el vector */
        vector = (int *)realloc(vector, n * sizeof(int)); // Redimensiona el vector comservando sus valores

        if(vector == NULL){
            printf("\n---No se redimensiono la memoria---");
        }
        else{
            printf("\n--Nuevo vector--\n");

            for (i = 0; i < n; i++){

                printf("%i, ", *(vector + i));
            }

            printf("\n");
        }
    }

    return 0;
}

void aleatorio(int *vector, int n){
    int i;
    srand(time(NULL));
    printf("\nVector aleatorizado\n");

    for (i = 0; i < n; i++){
        *(vector + i) = rand() % 3;

        printf("%i, ", *(vector + i));
    }

    printf("\n");
}