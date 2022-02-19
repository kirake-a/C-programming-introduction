/* Escribe la funcion potencia(base, n) oara calcular el valor de vase elevado a la potencia n */
#include <stdio.h>

int calculoPotencia(int base, int potencia);
int main(){

    int base, n, resultado;

    printf("Programa que que calcula el valor de vase una base elevado a la potencia n.");
    printf("\nEscriba el valor de la base: ");
    scanf("%d", &base);

    printf("\nEscriba el valor de n: ");
    scanf("%d", &n);

    resultado = calculoPotencia(base, n);
    printf("\nEl resultado de la exponenciacion dada es: %d", resultado);

    return 0;
}

int calculoPotencia(int base, int potencia){

    int i, productoP = 1;

    for (i = 1; i <= potencia; i++){
        productoP = productoP * base;
    }

    return productoP;
}