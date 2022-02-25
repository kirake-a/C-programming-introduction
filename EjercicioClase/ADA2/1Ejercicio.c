/* Sin usar biblioteca de funciones (a excepción de stdio.h), escriba un programa que defina y pruebe las siguientes funciones:

    Función para calcular la multiplicación de dos números, utilizando la estrategia de repetición de sumas.
    Hacer la función que calcule el número de Fibonacci dado, el valor n que representa su posición en la serie de números de Fibonacci.
    Hacer la función factorial.
    Definir la función potencia.

Nota: no es necesario pedir los datos al usuario, se pueden invocar las funciones con valores predefinidos. */

#include <stdio.h>

int mult2Numbers(int value1, int valu2);
int fibonacci(int cBase1, int cBase2, int n_position);
int factorialNumber(int factorial);

int main(){

    //Variables for all the seccion for the switch sentence
    int decition, num1, num2, n_position, the_factorial, base, exponent;

    //How does the results are given into the switch sentence? Variables.
    int result_mult, result_fibonacci, result_factorialNumber;
    int case_base1 = 0, case_base2 = 1;

    printf("1. Para la multiplicacion de dos numeros. \n2. Calcular el valor de la posicion n en la sucesion de Fibonacci.");
    printf("\n3. Conocer el factorial de un numero. \n4. Conocer la potencia de una base a una potencia.");
    printf("\n\nLo que usted desea hacer es: ");
    scanf("%d", &decition);

    switch(decition){
        case 1:
            printf("\nDigite el primer valor: ");
            scanf("%d", &num1);
            printf("\nDigite el segundo valor: ");
            scanf("%d", &num2);

            result_mult = mult2Numbers(num1, num2);

            printf("\nEl resultado de la multiplicacion de %d por %d es: %d", num1, num2, result_mult);
            break;

        case 2:
            printf("\nDigite la posicion que desea conocer: ");
            scanf("%d", &n_position);

            //The fibonacci if sentence is bacause in this problem we have 2 base case (0 and 1), so they can't change...
            if(n_position == 1){
                result_fibonacci = case_base1;
            }
            else if(n_position == 2){
                result_fibonacci = case_base2;
            }
            else if(n_position > 2){
                result_fibonacci = fibonacci(case_base1, case_base2, n_position);
            }
            
            printf("\nEl valor de fibonacci en su posicion requerida es: %d", result_fibonacci);
            break;

        case 3:
            printf("\nUsted esta calculando el factorial del numero: ");
            scanf("%d", &the_factorial);

            result_factorialNumber = factorialNumber(the_factorial);

            printf("\nEl factorial del numero %d es: %d", the_factorial, result_factorialNumber);
            break;

        case 4:
            printf("\nDigite el valor de la base: ");
            scanf("%d", &base);
            printf("\nInserte el valor del exponente: ");
            scanf("%d", &exponent);
            break;

        default:
            printf("\nOpcion invalida, es necesario REINICIAR.");
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

int fibonacci(int cBase1, int cBase2, int n_position){
    int position, i;

    for (i = 3; i <= n_position; i++){
        position = cBase1 + cBase2;
        cBase1 = cBase2;
        cBase2 = position;
    }

    return position;
}

int factorialNumber(int factorial){

    int i, rFactorial = 1;

    for (i = 1; i <= factorial; i++){
        rFactorial = i * rFactorial;
    }

    return rFactorial;
}