/*Desarrolla un programa con una función que compare dos cadenas de caracteres*/
#include <stdio.h>
#include <string.h>

// funcion secundaria
void comparar(char *cadena1, char *cadena2)
{

    int resultado1 = 0;
    int tam1;
    int tam2;

    tam1 = strlen(cadena1);
    tam2 = strlen(cadena2);

    if (tam1 == tam2)
    { // Solo se verificaran que sean iguales si tienen el mismo tamaño

        for (int i = 0; *cadena1 != '\0'; cadena1++)
        {
            if (*cadena1 == *cadena2)
            {
                resultado1 = 1;
            }
            else
            {
                resultado1 = 0;
                break;
            }
            cadena2++;
        }

        printf("respuesta1 %d", resultado1);
    }

    if (resultado1 == 1)
    {
        printf("\nSon iguales");
    }
    else
    {
        printf("\nNo son iguales");
    }
}

// funcion principal
int main()
{

    char cadena1[20];
    char cadena2[20];

    printf("Ingrese la cadena 1: ");
    gets(cadena1);
    printf("Ingrese la cadena 2: ");
    gets(cadena2);

    comparar(cadena1, cadena2);

    return 0;
}
