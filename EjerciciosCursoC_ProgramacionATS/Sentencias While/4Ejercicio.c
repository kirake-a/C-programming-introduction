//Haciendo la suma de las primeras n fracciones, es decir, 1 + 1/2 + 1/3...
#include <stdio.h>

int main()
{
    //Defining variables
    float contador = 1, sumatoria = 0;
    int n;

    //Giving the variables a value
    printf("Defina la n para calcular la suma de sus fracciones: ");
    scanf("%f", &n);
   
   //While process and output
    while(contador <= n)
    {
        sumatoria = sumatoria + (1 / contador);
        contador += 1;
    }

    printf("\nLa sumatoria total de las fracciones es: %.3f", sumatoria);

    return 0;
}