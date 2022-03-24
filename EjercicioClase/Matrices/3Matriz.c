// Programa que realiza la multiplicacion de dos matrices 3*3
#include <stdio.h>
#define tam 3

int main(){
    int g, h, i, j, multiplicacion;
    float matriz1[tam][tam], matriz2[tam][tam], mult[tam][tam], suma;

//Input section
    //Inserting numbers to matriz1
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("[%d][%d]: ", i + 1, j + 1);
            scanf(" %f", &matriz1[i][j]);
        }
    }

    //Inserting numbers to matriz2
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("[%d][%d]: ", i + 1, j + 1);
            scanf(" %f", &matriz2[i][j]);
        }
    }

//Process section
    //Calculating the product of A*B
    for (h = 0; h < tam; h++){
        for (i = 0; i < tam; i++){
            suma = 0;

            for (j = 0; j < tam; j++){
                suma += matriz1[i][j] * matriz2[j][h];
            }

            mult[i][h] = suma;
        }
    }

//Output
    printf("Imprimir a la matriz resultante del prodcuto\n");

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%f", mult[i][j]);
        }

        printf("\n");
    }
}