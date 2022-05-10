/*  Elaborar un programa que solicite 10 números enteros desde el teclado.
Calcule la suma de los cuadrados de cada uno de ellos y obtenga la
media. */
#include <stdio.h>
#include <math.h>

#define TAM 3

void calcular_cuadrado(int array[TAM]);
void sumatoria(int array_auxiliar[TAM]);
void calcular_media(float sumatoria);
void print_result(float promedio);

int main()
{

    int array[TAM];
    int i;

    for (i = 0; i < TAM; i++){
        printf("Digite el valor de la posicion %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    calcular_cuadrado(array);

    return 0;
}

void calcular_cuadrado(int array[TAM]){
    int i;
    int array_auxiliar[TAM];

    for (i = 0; i < TAM; i++){
        array_auxiliar[i] = array[i] * array[i];
    }

    sumatoria(array_auxiliar);
}

void sumatoria(int array_auxiliar[TAM]){
    float sumatoria = 0;

    for (int i = 0; i < TAM; i++){
        sumatoria = sumatoria + array_auxiliar[i];
    }

    printf("Sumatoria: %d", sumatoria);

    calcular_media(sumatoria);
}

void calcular_media(float sumatoria){
    float promedio;

    promedio = sumatoria / TAM;

    print_result(promedio);
}

void print_result(float promedio){
    printf("\nEl promedio del la suma del cuadrado de los valores del arreglo es: %.3f", promedio);
}
