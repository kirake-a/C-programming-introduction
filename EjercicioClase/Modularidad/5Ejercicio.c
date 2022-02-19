/*Escribir una funcion logica Vocal que determine si un caracter es una vocal */

#include <stdio.h>

char vocal(char letra);

int main()
{

    char letra, valor, evaluacion;

    printf("Digite una letra para determinar si es una vocal: ");
    scanf("%c", &letra);

    evaluacion = vocal(letra);

    if (evaluacion == 'V')
    {
        printf("\nLa letra digitada es una VOCAL.");
    }
    else if (evaluacion == 'F')
    {
        printf("\nLa letra digitada NO es una vocal.");
    }

    return 0;
}

char vocal(char letra)
{
    char comparador, veracidad;

    switch (letra)
    {

    case 'a': case 'A':
        veracidad = 'V';
        break;
    case 'e': case 'E':
        veracidad = 'V';
        break;
    case 'i': case 'I':
        veracidad = 'V';
        break;
    case 'o': case 'O':
        veracidad = 'V';
        break;
    case 'u': case 'U':
        veracidad = 'V';
        break;
    default:
        veracidad = 'F';
    }

    return veracidad;
}