#include <stdio.h>
#define tam 5

void interseccionConjuntos(int cadena1[tam], int cadena2[tam]);
void output(int contador, int interseccion[tam], int a);

int main(){

    int cadena1[tam], cadena2[tam], interseccion[tam];
    int i, j, contador = 0, a = 0;

    //Se piden valores al usuario para definir los arreglos 1 y 2... entrada de datos*
    for (i = 0; i < tam; i++){
        printf("Inserte un valor para la cadena entera1[%d]: ", i);
        scanf("%d", &cadena1[i]);
    }

    printf("\n\n");

    for (j = 0; j < tam; j++){
        printf("Inserte un valor para la cadena entera2[%d]: ", j);
        scanf("%d", &cadena2[j]);
    }

// Llamada a funcion que busca la interseccion entre las cadenas declaradas...
    interseccionConjuntos(cadena1, cadena2);

    return 0;
}


// Funcion verificadora de la interseccion entre los conjuntos definidos
void interseccionConjuntos(int cadena1[tam], int cadena2[tam]){
    int interseccion[tam];
    int a = 0, i, j, contador = 0;

    // Ciclo que verifica la interseccion entre los conjuntos dados
    // Se va recorriendo j en funcion de i, que pertencen a los conjuntos definidos anteriormente...
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

// Hablando a la funcion output para que demuestre al usuario los resultados obtenidos...
    output(contador, interseccion, a);
}

/* Funcion que recibe los valores resultado con el nuevo arreglo creado en la funcion interseccionConjuntos y solamente 
le muestra en pantalla al usuario los resultados */
void output(int contador, int interseccion[tam], int a){
    int i;

// La cantidad de valores que cumplen que estan en la interseccion de cadena1 y cadena2
    printf("\nLa cantidad de valores que intersecan son: %d", contador);

// Printeo de la interseccion por extension mediante el uso de un ciclo for
    printf("\n\nInterseccion:\n");

/* Aqui se printea hasta un valor antes de todos los que existen, esto con motivo de que 
el ultimo valor no termine en una coma, el ultimo valor se muestra en pantalla fuera del ciclo for
con eso se elimina el problema de la coma final... */
    for (i = 0; i < a-1; i++){
        printf("%d, ", interseccion[i]);
    }
    printf("%d", interseccion[a]);
}