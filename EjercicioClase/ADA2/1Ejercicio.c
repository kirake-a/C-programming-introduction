/* Sin usar biblioteca de funciones (a excepción de stdio.h), escriba un programa que defina y pruebe las siguientes funciones:

    Función para calcular la multiplicación de dos números, utilizando la estrategia de repetición de sumas.
    Hacer la función que calcule el número de Fibonacci dado, el valor n que representa su posición en la serie de números de Fibonacci.
    Hacer la función factorial.
    Definir la función potencia.

Nota: no es necesario pedir los datos al usuario, se pueden invocar las funciones con valores predefinidos. */

#include <stdio.h>

int mult2Numbers(int value1, int valu2);

int main(){

    int decition, num1, num2, n_position, the_factorial;
    int result_mult;

    printf("1. Para la multiplicacion de dos numeros. 2. Calcular el valor de la posicion n en la sucesion de Fibonacci.");
    printf("\n3. Conocer el factorial de un numero. 4. Conocer la potencia de una base a una potencia.");
    printf("Lo que usted desea hacer es: ");
    scanf("%d", &decition);

    switch(decition){
        case 1:
            printf("Digite el primer valor: ");
            scanf("%d", &num1);
            printf("Digite el segundo valor: ");
            scanf("%d", &num2);

            result_mult = mult2Numbers(num1, num2);

            printf("\nEl resultado de la multiplicacion de %d por %d es: %d", num1, num2, result_mult);
            break;
        case 2:
            printf("Digite la posicion que desea conocer: ");
            scanf("%d", &n_position);
            break;
        case 3:
            printf("Usted esta calculando el factorial del numero: ");
            scanf("%d", &the_factorial);
            break;
    }

    return 0;
}

int mult2Numbers(int value1, int value2){

    int i, the_mult = 0;

    for (i = 1; i <= value2; i++){
        the_mult = the_mult + value1;
    }

    return the_mult;
}