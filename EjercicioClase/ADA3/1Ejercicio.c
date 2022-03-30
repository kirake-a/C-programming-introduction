#include <stdio.h>
#define tam 5

void interseccionConjuntos(int cadena1[tam], int cadena2[tam]);

int main(){

    int cadena1[tam], cadena2[tam];
    int i, j, a;

    //Se piden valores al usuario para definir los arreglos 1 y 2
    for (i = 0; i < tam; i++){
        printf("Inserte el valor %d de la cadena entera1: ", i + 1);
        scanf("%d", &cadena1[i]);
    }

    printf("\n\n");

    for (j = 0; j < tam; j++){
        printf("Inserte el valor %d de la cadena entera2: ", j + 1);
        scanf("%d", &cadena2[i]);
    }

    interseccionConjuntos(cadena1, cadena2);

    return 0;
}

// Funcion verificadora de la interseccion entre los conjuntos definidos
void interseccionConjuntos(int cadena1[tam], int cadena2[tam]){
    int interseccion[tam];
    int a = 0, i, j;

    // Ciclo que verifica la interseccion entre los conjuntos dados
    // Se va recorriendo j en funcion de i, que pertencen a los conjuntos definidos anteriormente...
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            // Si el elemento en conjunto1 en i pertenece a conjunto2 en j se mete a un nuevo array...
            if (cadena1[i] == cadena2[j])
            {
                interseccion[a] = cadena1[i];

                a++;
            }
        }
    }

    // Faltaria hacer el printeo...
}
