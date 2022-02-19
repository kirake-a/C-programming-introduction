/* Determinar el mayor de tres numeeros, el usuario debe ingresar los tres
numeros y el sistema mostrar cual es mayor */

#include <stdio.h>

int main(){

    float num1 = 0, num2 = 0, num3 = 0;

    printf("Digite tres valores para evaluar cual de ellos es el mayor: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        printf("El valor mayor es el primero: %.3f", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("El valor mayor es el segundo: %.3f", num2);
    }
    else{
        printf("El valor mayor es el tercero: %.3f", num3);
    }

    return 0;
}