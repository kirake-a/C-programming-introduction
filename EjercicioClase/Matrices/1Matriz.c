#include <stdio.h>
#define tam 4

int main(){

    int i, j;
    int matriz[tam][tam];

    // Con el for para la variable i, recorremos la filas de la matriz
    for (i = 0; i < tam; i++){
        // Con este for recorremos las columnas de la matriz
        for (j = 0; j < tam; j++)
        {
            printf("[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}