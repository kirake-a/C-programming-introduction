#include <stdio.h>
#include <string.h>

// Se declara la estructura para los datos de los jugadores
struct datos{
    char nombre[100];
    char nombre_equipo[100];
    float cantidad_partidos;
    float goles;
    float promedio_partido;
};

int main(){
    int i, tam;

    printf("Inserte la cantidad de jugadores que desea registrar: ");
    scanf("%d", &tam);

    // Declarando el arreglo de estructuras
    struct datos jugador[tam];

    // Obteniendo los datos de los jugadores
    for (i = 0; i < tam; i++){
        printf("\n\nJugador %d\n\n", i + 1);

        fflush(stdin);

        printf("Nombre del jugador: ");
        gets(jugador[i].nombre);

        fflush(stdin);

        printf("Nombre del equipo: ");
        gets(jugador[i].nombre_equipo);

        printf("Cantidad de partidos jugados: ");
        scanf("%f", &jugador[i].cantidad_partidos);

        printf("Cantidad de goles anotados: ");
        scanf("%f", &jugador[i].goles);

        jugador[i].promedio_partido = jugador[i].goles / jugador[i].cantidad_partidos;
        
    }

    // Pinteando los resultados obtenidos
    printf("\n\nResultados obtenidos:\n---------------------------------------\n");
    for (i = 0; i < tam; i++){
        printf("EL JUGADOR %d\n\n", i + 1);

        printf("*Nombre: %s\n", jugador[i].nombre);
        printf("*Nombre del equipo: %s\n", jugador[i].nombre_equipo);
        printf("*Partidos jugados: %.3f\n", jugador[i].cantidad_partidos);
        printf("*Goles anotados: %.3f\n", jugador[i].goles);
        printf("*Promedio de goles por partido: %.3f", jugador[i].promedio_partido);

        printf("\n-----------------------------------------\n");
    }

    return 0;
}