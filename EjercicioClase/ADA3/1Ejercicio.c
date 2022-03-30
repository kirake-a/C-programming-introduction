#include <stdio.h>
#define tam 5

void interseccionConjuntos(int cadena1[tam], int cadena2[tam]);

int main(){

    int cadena1[tam], cadena2[tam], interseccion[tam];
    int i, j, contador = 0, a = 0;

    //Se piden valores al usuario para definir los arreglos 1 y 2
    for (i = 0; i < tam; i++){
        printf("Inserte un valor para la cadena entera1[%d]: ", i);
        scanf("%d", &cadena1[i]);
    }

    printf("\n\n");

    for (j = 0; j < tam; j++){
        printf("Inserte un valor para la cadena entera2[%d]: ", j);
        scanf("%d", &cadena2[j]);
    }

    for (j = 0; j < tam; j++){
        printf("%d, ", cadena2[i]);
    }

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            // Si el elemento en conjunto1 en i pertenece a conjunto2 en j se mete a un nuevo array...
            if (cadena1[i] == cadena2[j]){
                contador += 1;
                interseccion[a] = cadena1[i];

                a++;
            }
        }
    }

    printf("%d", contador);

    printf("\n\nInterseccion:\n");
    for (i = 0; i < a; i++){
        printf("%d, ", interseccion[i]);
    }

    return 0;
}

/*
// Funcion verificadora de la interseccion entre los conjuntos definidos
void interseccionConjuntos(int cadena1[tam], int cadena2[tam]){
    int interseccion[tam];
    int a = 0, i, j, contador = 0;

    for (i = 0; i < tam; i++){
        printf("\n%d, ", cadena1[i]);
    }

        // Ciclo que verifica la interseccion entre los conjuntos dados
        // Se va recorriendo j en funcion de i, que pertencen a los conjuntos definidos anteriormente...
        for (i = 0; i < tam; i++)
        {
            for (j = 0; j < tam; j++)
            {
                // Si el elemento en conjunto1 en i pertenece a conjunto2 en j se mete a un nuevo array...
                if (cadena1[i] == cadena2[j])
                {
                    contador += 1;
                    interseccion[a] = cadena1[i];

                    a++;
                }
            }
        }

        // Faltaria hacer el printeo...
        printf("\n\nInterseccion:\n");
        for (i = 0; i < a; i++){
            printf("%f, ", interseccion[i]);
        }

    printf("\nLa cantidad de valores que intersecan son: %d", contador);
} 
*/
