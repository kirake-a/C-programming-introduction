/* Este programa no factoriza ni mucho menos encuentra valores x1 y x2 para ecuaciones cuadraticas,
solamente evalua valores x de f(x) para obtener el valor de y*/
#include <stdio.h>
#include <math.h>

// Definiendo constantes para la ecuacion cuadratica
#define cuadrada 1
#define lineal 3
#define independiente 2

int main(){
    float resultado, x;

    printf("Digite el valor de x: ");
    scanf("%f", &x);

    resultado = (cuadrada * pow(x, 2)) + (lineal * x) + (independiente);

    printf("\n\nValor para x: %f", resultado);

    return 0;
}
