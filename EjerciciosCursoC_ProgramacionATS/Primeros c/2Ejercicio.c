//Librerias
#include <stdio.h>
#include <math.h>

int main(){
    //Variables
    float hipotenusa, cateto1, cateto2;

    //The values on the variables
    printf("Digite el valor de los 2 catetos: ");
    scanf ("%f %f", &cateto1, &cateto2);

    //The process
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    //Output
    printf("La hiptenusa del triangulo es: %.3f", hipotenusa);

    return 0;
}