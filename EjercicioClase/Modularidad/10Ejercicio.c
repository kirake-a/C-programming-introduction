#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define max 5

// Prototipado de las funciones
void llena(int n, float a[max]);
void resta(int n, float a[max], float b[max], float c[max]);
void suma(int n, float a[max], float b[max], float c[max]);
void cero(int n, float c[max]);
void identidad(int n, float c[max]);
void imprime(int n, float a[max]);

int main(){
    int n = 3;
    float a[max], b[max], c[max];

    // Aqui se llama a la funcion para el llenado del arreglo a y posteriormente b
    llena(n, a);
    printf(" vector a\n");
    imprime(n, a);

    llena(n, b);
    printf(" vector b\n");
    imprime(n, b);

    // Desde aqui se realizan los procesos aritmeticos para el trabajo con los arreglos y un arreglo extra
    suma(n, a, b, c);
    printf(" vector suma\n");
    imprime(n, c);

    resta(n, a, b, c);
    printf(" vector resta\n");
    imprime(n, c);

    cero(n, a);
    printf(" vector cero\n");
    imprime(n, a);

    identidad(n, b);
    printf(" vector identidad\n");
    imprime(n, b);

    return 0;
}

void llena(int n, float a[max])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nDame el dato que ocupa posicio i=%d: ", i + 1);
        scanf("%f", &a[i]);
    }
}

void suma(int n, float a[max], float b[max], float c[max])
{
    int i;
    for (i = 0; i < n; i++){
        c[i] = a[i] + b[i];
    }
}

void resta(int n, float a[max], float b[max], float c[max])
{
    int i;
    for (i = 0; i < n; i++){
        c[i] = a[i] - b[i];
    }
}

void identidad(int n, float c[max])
{
    int i;
    for (i = 0; i < n; i++){
        c[i] = 1;
    }
}

void cero(int n, float c[max])
{
    int i;
    for (i = 0; i < n; i++){
        c[i] = 0;
    }
}

void imprime(int n, float a[max])
{
    int i;
    for (i = 0; i < n; i++){
        printf("%6.0f", a[i]);
    }

    printf("\n");
}