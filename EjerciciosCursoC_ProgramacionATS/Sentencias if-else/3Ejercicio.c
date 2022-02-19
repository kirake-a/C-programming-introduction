/* Ingrese un numero y calcule e imprima su raiz cuadrada. Si el numeros
es negativo imprima el numero y un mensaje que diga "tiene raiz imaginaria"
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float num, result;

    printf("Ingrese un valor para evaluar: ");
    scanf("%f", &num);

    if(num >= 0)
    {
        result = sqrt(num);
        printf("El valor ingresado tiene como raiz cuadrada: %.3f", result);
    }
    else
    {
        printf("El valor ingresado tiene una raiz imaginaria.");
    }

    return 0;
}