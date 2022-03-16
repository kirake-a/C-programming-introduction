#include <stdio.h>
#define tam 5

int main(){
    int i;
    int lista[tam], lista2[tam], suma[tam];

    //Pidiendo los datos del primer arreglo
    for (i = 0; i < tam; i++){
        printf("lista1[%d]: ", i + 1);
        scanf(" %d", &lista[i]);
    }

    //Pidiendo los datos del segundo arreglo
    for (i = 0; i < tam; i++)
    {
        printf("lista2[%d]: ", i + 1);
        scanf(" %d", &lista2[i]);
    }

    //Imprimiendo los datos que continen los arreglos...
    printf("lista1\t\tlista2\n");
    for (i = 0; i < tam; i++){
        printf("[%d]: %d\t\t[%d]: %d\n", i + 1, lista[i], i + 1, lista2[i]);
    }

    for (i = 0; i < tam; i++){
        suma[i] = lista[i] + lista2[i];
    }

    for (i = 0; i < tam; i++){
        printf("[%d]: %d\t\t[%d]: %d", i + 1, lista[i, i + 1, lista2[i]]);
    }

        return 0;
}