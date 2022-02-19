#include <stdio.h>

int main()
{

    int numero, contador = 0;

    printf("Escriba un numero: ");
    scanf("%d", &numero);

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            contador++;
        }
    }

    if (contador > 0)
    {
        printf("El numero %d no es primo", numero);
    }
    else
    {
        printf("El numero %d es primo", numero);
    }

    return 0;
}