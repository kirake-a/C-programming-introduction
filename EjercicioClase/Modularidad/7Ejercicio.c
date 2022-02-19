//El funcionamiento del intercambio de valores entre las variables, segun lo que se aplique en las estructuras.
#include <stdio.h>

void intercambio(int valor1, int valor2);

int main(){
    int num1, num2;

    printf("Escriba dos numeros: ");
    scanf("%d %d", &num1, &num2);

    intercambio(num1, num2);

    printf("\nDesde la funcion main: ");
    printf("\nNumero 1: %d", num1);
    printf("\nNumero 2: %d", num2);

    return 0;
}

void intercambio(int valor1, int valor2){

    int auxiliar = valor1;

    valor1 = valor2;
    valor2 = auxiliar;

    printf("\nDesde la funcion intercambio: ");
    printf("\nNumero 1: %d", valor1);
    printf("\nNumero 2: %d", valor2);

}