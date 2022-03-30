#include <stdio.h>
#include <string.h> //Gets, strlen

// Declarando funciones
int esPalindromo(char cad[10], int cantidad);

// Fucnión principal
int main()
{

    // Variables: la cadena, cantidad de elementos de la cadena y el resultado (0 no es y 1 si es)
    char cad[10];
    int cantidad, resultado;

    printf("Programa que revisa si la cadena es palíndroma");
    printf("\nEscriba lo que sea, con menor o igual de 10 digítos: ");
    gets(cad);

    cantidad = strlen(cad);
    resultado = esPalindromo(cad, cantidad);

    if (resultado == 1){
        printf("\nEs palíndromo");
    }
    else{
        printf("\nNo es palíndromo");
    }

    return 0;
}

// Fucnión que checa si es palíndroma
int esPalindromo(char cad[10], int cantidad)
{

    int n, respuesta;
    int k = 0;
    /* n es la mitad de la cantidad.
    Respuesta es el resultado (0 no es y 1 si es)
    k es el contador para comparar*/

    // Revisa si la cantidad es par o no, para hacer las operaciones debidas
    if (cantidad % 2 == 0)
    {

        n = cantidad / 2;
        // Va a comparar los primeros con los ultimos
        for (int i = 0; i < n; i++)
        {
            if (cad[i] != cad[cantidad - 1 - k])
            {
                respuesta = 0;
                break;
            }
            else
            {
                respuesta = 1;
            }
            k++;
        }
    }
    else
    {
        n = (cantidad - 1) / 2;
        for (int i = 0; i < n; i++)
        {
            if (cad[i] != cad[cantidad - 1 - k])
            {
                respuesta = 0;
                break;
            }
            else
            {
                respuesta = 1;
            }
            k++;
        }
    }

    return respuesta;
}