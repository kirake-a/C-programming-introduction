/* Realice un algoritmo que, con base en un numero proporcionado (1-7), indique el dia de la semana que le corresponde (L-D). */

#include <stdio.h>
#include <string.h>

int select_day();
int choosen_day(int number_day);

int main(){
    int day;

    day = select_day();
    choosen_day(day);

    return 0;
}

int select_day(){
    int the_day;

    printf("Inserte un numero entre el 1-7.");
    printf("\nInserte un numero para el dia de la semana: ");
    scanf("%d", &the_day);

    return the_day;
}

int choosen_day(int number_day){

    switch(number_day){

        case 1:
            printf("\nHoy es domingo\n");
            break;
        case 2:
            printf("\nHoy es lunes\n");
            break;
        case 3:
            printf("\nHoy es martes\n");
            break;
        case 4:
            printf("\nHoy es miercoles\n");
            break;
        case 5:
            printf("\nHoy es jueves\n");
            break;
        case 6:
            printf("\nHoy es viernes\n");
            break;
        case 7:
            printf("\nHoy es sabado\n");
            break;
        default:
            printf("\nEste numero no corresponde a un dia de la semana.");
    }

    return 0;
}