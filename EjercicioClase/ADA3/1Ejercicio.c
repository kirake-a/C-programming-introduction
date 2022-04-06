#include <stdio.h>
#include <string.h>
#define tam 5

int main()
{

    int cadena1[5];
    int cadena2[5];
    int repeticiones[5];

    // OBTENER LAS CADENAS

    for (int i = 0; i < tam; i++)
    {
        printf("Inserte un valor para la cadena entera1[%d]: ", i);
        scanf("%d", &cadena1[i]);
    }

    printf("\n\n");

    for (int j = 0; j < tam; j++)
    {
        printf("Inserte un valor para la cadena entera2[%d]: ", j);
        scanf("%d", &cadena2[j]);
    }

    // COMPARACION
    int contador = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (cadena1[i] == cadena2[j])
            {
                repeticiones[contador] = cadena1[i];
                contador++;
            }
        }
    }

    // Ver que no se repitan
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    int k = -1;
    int nueva[100];

    for (int i = 0; i < contador; i++)
    { // K es el tamano de la cadena creada

        switch (repeticiones[i])
        {
        case 1:
            t1++;
            if (t1 < 2)
            {
                k++;
                nueva[k] = repeticiones[i];
            }
            break;
        case 2:
            t2++;
            if (t2 < 2)
            {
                k++;
                nueva[k] = repeticiones[i];
            }
            break;
        case 3:
            t3++;
            if (t3 < 2)
            {
                k++;
                nueva[k] = repeticiones[i];
            }
            break;
        case 4:
            t4++;
            if (t4 < 2)
            {
                k++;
                nueva[k] = repeticiones[i];
            }
            break;
        case 5:
            t5++;
            if (t5 < 2)
            {
                k++;
                nueva[k] = repeticiones[i];
            }
            break;
        case 6:
            t6++;
            if (t6 < 2)
            {
                k++;
                nueva[k] = repeticiones[i];
            }
            break;
        case 7:
            t7++;
            if (t7 < 2)
            {
                k++;
                nueva[k] = repeticiones[i];
            }
            break;
        case 8:
            t8++;
            if (t8 < 2)
            {
                k++;
                nueva[k] = repeticiones[i];
            }
            break;
        case 9:
            t9++;
            if (t9 < 2)
            {
                k++;
                nueva[k] = repeticiones[i];
            }
            break;
        default:
            printf("\nno número");
        }
    }

    printf("\nLa cantidad de valores que intersecan son: %d", k + 1);
    printf("\nCadena nueva: ");
    for (int r = 0; r < k + 1; r++)
    {
        printf("%d", nueva[r]);
    }

    return 0;
}
