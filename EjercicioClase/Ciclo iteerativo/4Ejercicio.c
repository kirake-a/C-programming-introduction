#include <stdio.h>
#include <math.h>

int main()
{
    printf("Calculando todos los numeros de 3 cirfras que pertenecen a los numeros de Amstrong.");

    int centenas, decenas, unidades, valor_Amstrong, valor_Puro;

    for (centenas = 0; centenas <= 9; centenas++){   

        for (decenas = 0; decenas <= 9; decenas++){ 

            for (unidades = 0; unidades <= 9; unidades++){

                valor_Amstrong = pow(centenas, 3) + pow(decenas, 3) + pow(unidades, 3);
                valor_Puro = (centenas * 100) + (decenas * 10) + unidades;

                if (valor_Amstrong == valor_Puro){
                    printf("\nEl valor %d, corresponde a los valor solicitados.", valor_Amstrong);
                }
            }
        }
    }

    return 0;
}