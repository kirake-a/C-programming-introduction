#include <stdio.h>
#define tam1 3
#define tam2 5

float promedioM(float matriz[tam1][tam2]);

int main(){

    float matriz[tam1][tam2];
    float promedio;
    int i, j;

    for (i = 0; i < tam1; i++){
        for (j = 0; j < tam2; j++){
            printf("Inserte un valor para el recuadro [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    promedio = promedioM(matriz);

    printf("%f", promedio);

    return 0;
}

float promedioM(float matriz[tam1][tam2]){

    int i, j;
    float suma0 = 0, suma1 = 0, suma2 = 0, suma3 = 0, suma4 = 0;
    float promedio0 = 0, promedio1 = 0, promedio2 = 0, promedio3 = 0, promedio4 = 0;
    float sumatoria_promedio;
    float cantidad[tam1][tam2];

    for (j = 0; j < tam2; j++){
        for (i = 0; i < tam1; i++){
            if( j == 0){
                suma0 = suma0 + matriz[i][0];
                promedio0 = suma0 / 3;
            }
            if (j == 1){
                suma1 = suma1 + matriz[i][1];
                promedio1 = suma1 / 3;
            }
            if (j == 2){
                suma2 = suma2 + matriz[i][2];
                promedio2 = suma2 / 3;
            }
            if (j == 3){
                suma3 = suma3 + matriz[i][3];
                promedio3 = suma3 / 3;
            }
            if (j == 4){
                suma4 = suma4 + matriz[i][4];
                promedio4 = suma4 / 3;
            }

            sumatoria_promedio = promedio0 + promedio1 + promedio2 + promedio3 + promedio4;
        }
    }

    return sumatoria_promedio;
}