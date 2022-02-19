/*Pedir dos numeros al usuario y sumarlos, restarlos,
multiplicarlos y dividirlos */

#include <stdio.h>

int main(){
    //Determining the variables
    float num1, num2, sum, rest, mult, div;

    //Determining the value of the variables
    printf("Digite 2 numeros: ");
    scanf(" %f %f", &num1, &num2);

    //Operations
    sum = num1 + num2;
    rest = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    //Outputs
    printf("El resultado de la suma de los valores es: %.3f \n", sum);
    printf("El resultado de la resta de los valores es: %.3f \n", rest);
    printf("El resultado de la multiplicacion de los valores es: %.3f \n", mult);
    printf("El resultado de la division de los valores es: %.3f", div);

    return 0;
}