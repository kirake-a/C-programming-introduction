// Aplicaciones de la aritmetica de apuntadores
#include <stdio.h>

int main(){

    float matriz[2][3];
    float *apuntadorM;

    apuntadorM = matriz[0]; // Especificamos la fila, apunta a matriz[0][0]

    printf("Aplicacion de aritmetica de apuntadores con datos double\n");

    // Pidiendo los datos de la matriz entera con un solo ciclo FOR
    /* Con la  parte segunda del ciclo FOR lo que se hace es calcular la cantidad de espacio que posee
    la matriz declarada, eso se hace de la forma en que se ejemplifica*/
    for (int i = 0; i < sizeof(matriz)/sizeof(float); i++){
        printf("\nDame el dato %d de la matriz: ", i + 1);
        scanf("%f", apuntadorM);

        apuntadorM++;
    }

    printf("\n\n");

    apuntadorM = matriz[0]; // Regresamos la posicion del apuntador a matriz[0][0]

    // Imprimiendo en forma de lista todos los elementos de la matriz
    for (int i = 0; i < sizeof(matriz) / sizeof(float); i++){
        printf("Dato %d: %.3f\n", i + 1, *apuntadorM);

        apuntadorM++;
    }

    return 0;
}