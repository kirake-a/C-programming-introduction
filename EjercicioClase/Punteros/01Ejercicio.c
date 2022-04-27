#include <stdio.h>

void jugar1(int m);
void jugar2(int *z);

int main()
{

    int x = 10;

    printf("%d\n", x);
    /* Con este printf lo que se hace es recuperar la direccion de memoria
    y/o posicion de la variable dentro de lo que es la computadora. */
    printf("Direccion de memoria de x = %d\n", &x);
    /* Con esta instruccion en %u, lo que se hace es printear la misma posicion 
    de la variable pero sin utilizar el signo como lo haria %d */
    printf("Direccion de memoria de x = %u", &x);

    // Declaracion de un puntero
    /* Se saca la direccion de memoria de x y se le asigna al puntero */
    int* dirX = &x;

    float y = 0.5;
    float *dirY = &y;

    /* La pricipal funcionalidad de los punteros es el trabajo de referencias
    en funciones en el programa */

    int m = 10;
    int z = 10;

    jugar1(m);
    //printf("%d\n", m); 

    return 0;
}

void jugar1(int m){
    
    m = (m + 3) * 2 - 1;
    printf("%d\n", m);
}

void jugar2(int *z){

} 