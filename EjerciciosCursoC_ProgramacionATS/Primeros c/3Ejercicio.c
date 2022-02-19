//Hacer un programa que calcule areas de trapecios

#include <stdio.h>
#include <math.h>

int main(){
    //The variables
    float base_M, base_m, area, altura;

    //All the data
    printf("Digite los datos de la base mayor: ");
    scanf(" %f", &base_M);
    printf("Digite el valor de la base menor: ");
    scanf(" %f", &base_m);
    printf("Digite los datos de la altura: ");
    scanf("%f", &altura);

    //Calculating the area
    area = ((base_M + base_m) * altura) / 2;

    //Output
    printf("\nEl area es: %.3f", area);

    return 0;
}