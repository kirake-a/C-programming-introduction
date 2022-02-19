/* Recibir una calificacion entre 0 y 100 y determinar el grado 
cualitativo de acuerdo a la tabla dada */

#include <stdio.h>

int main()
{

    float calif;
    int contador;

    printf("Digite su calificacion: ");
    scanf("%f", &calif);
    contador = 0;

    do
    {

        if (calif < 0 || calif > 100)
        {
            printf("Calificacion no valida. Digitela de nuevo...");
            printf("\nDigite su calificacion: ");
            scanf("%f", &calif);
            continue;
        }

        if (calif >= 0 && calif <= 100)
        {
            if (calif >= 91 && calif <= 100)
            {
                printf("\nSu calificacion es excelente.");
            }
            else if (calif >= 81 && calif <= 90)
            {
                printf("\nSu calificacion es muy buena.");
            }
            else if (calif >= 71 && calif <= 80)
            {
                printf("\nSu calificacion es buena.");
            }
            else if (calif >= 61 && calif <= 70)
            {
                printf("\nSu calificacion es regular.");
            }
            else if (calif == 60)
            {
                printf("Su calificacion es suficiente.");
            }
            else if (calif >= 0 && calif <= 59)
            {
                printf("Su calificacion es reprobatoria.");
            }
        }

        contador++;

    } while (contador < 1);

    return 0;
}