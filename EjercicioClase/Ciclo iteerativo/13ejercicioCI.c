#include <stdio.h>

int main()
{
    // Defining variables
    float i = 1, summation = 0;
    int n;

    // Giving the variables a value
    printf("Defina la n para calcular la suma de sus fracciones: ");
    scanf("%f", &n);

    // While process and output
    while (i <= n)
    {
        summation = summation + (1 / i);
        i += 1;
    }

    printf("\nLa sumatoria total de las fracciones es: %.3f", summation);

    return 0;
}
